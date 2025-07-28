#include "moneyTransfer.h"
#include "ui_moneyTransfer.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>


MoneyTransfer::MoneyTransfer(QWidget *parent, QString tc)
    : QDialog(parent)
    , ui(new Ui::MoneyTransfer)
    , m_tc(tc)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("Enter the Recipient's IBAN");
    ui->lineEdit_2->setPlaceholderText("Enter Amount");

    this->setWindowTitle("Money Transfer with Iban");

    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        qDebug() << "Database is not open!";
    }

    QSqlQuery query;
    query.prepare("SELECT BAKIYE FROM bankam WHERE TC = :tc");
    query.bindValue(":tc", m_tc);
    query.exec();
    if (query.next()) {
        ui->lcdNumber->display(query.value(0).toInt());
    }
    else {
        QMessageBox::warning(this, "User not found!", "There are no records matching your T.C. !");

    }
}

MoneyTransfer::~MoneyTransfer()
{
    delete ui;
}


void MoneyTransfer::on_pushButton_clicked()
{
    int miktar = ui->lineEdit_2->text().toInt();
    int bakiye = ui->lcdNumber->value();
    QString iban = ui->lineEdit->text();


    QSqlQuery qry;

    qry.prepare("SELECT * FROM bankam WHERE IBAN = :iban");
    qry.bindValue(":iban", iban);

    int yeniBakiye = bakiye - miktar;
    QSqlQuery gonderici;
    gonderici.prepare("UPDATE bankam SET BAKIYE = :yeniBakiye WHERE TC = :tc");
    gonderici.bindValue(":yeniBakiye", yeniBakiye);
    gonderici.bindValue(":tc", m_tc);


    qry.prepare("SELECT BAKIYE, TC FROM bankam WHERE IBAN = :iban");
    qry.bindValue(":iban", iban);

    if (!qry.exec() || !qry.next()) {
        attempts++;
        QMessageBox::critical(this,"Error","Enter Valid IBAN!");

        if(attempts >= 5) {
            QSqlQuery moveQuery;
            moveQuery.prepare(R"(
                    INSERT INTO blacklist (TC, ISIM, SOYISIM, IBAN, BAKIYE, SIFRE)
                    SELECT TC, ISIM, SOYISIM, IBAN, BAKIYE, SIFRE FROM bankam WHERE TC = :TC)");
            moveQuery.bindValue(":TC", m_tc);
            moveQuery.exec();

            QSqlQuery deleteQuery;
            deleteQuery.prepare("DELETE FROM bankam WHERE TC = :TC");
            deleteQuery.bindValue(":TC", m_tc);
            deleteQuery.exec();

            QMessageBox::critical(this, "Account Blacklisted", "5 incorrect entries! Your account is now blacklisted!");
            qApp->quit();

        }
    }

    if (qry.exec() && qry.next()) {
        int alici_bakiye = qry.value("BAKIYE").toInt();
        int aliciYeniBakiye = alici_bakiye + miktar;


        QSqlQuery alici;
        alici.prepare("UPDATE bankam SET BAKIYE = :bakiye WHERE IBAN = :iban");
        alici.bindValue(":bakiye", aliciYeniBakiye);
        alici.bindValue(":iban", iban);



        if (miktar > 0 && miktar <= bakiye) {
            if(gonderici.exec() && alici.exec()){
                ui->lcdNumber->display(yeniBakiye);
                QMessageBox::information(this, "Successful", "Money sent successfully!");

                QSqlQuery log;
                log.exec("INSERT INTO transactions (TC, TYPE, AMOUNT) VALUES ('" + m_tc + "', 'TRANSFER', " + QString::number(miktar) + ")");

            }else {
                QMessageBox::warning(this, "Unsuccessful", "Database error during transfer.");
            }
        }

        else{
            QMessageBox::warning(this,"Unsuccessful","Enter Valid Amount!");
            attempts++;
            if(attempts >= 5) {
                QSqlQuery moveQuery;
                moveQuery.prepare(R"(
                        INSERT INTO blacklist (TC, ISIM, SOYISIM, IBAN, BAKIYE, SIFRE)
                        SELECT TC, ISIM, SOYISIM, IBAN, BAKIYE, SIFRE FROM bankam WHERE TC = :TC)");
                moveQuery.bindValue(":TC", m_tc);
                moveQuery.exec();

                QSqlQuery deleteQuery;
                deleteQuery.prepare("DELETE FROM bankam WHERE TC = :TC");
                deleteQuery.bindValue(":TC", m_tc);
                deleteQuery.exec();

                QMessageBox::critical(this, "Account Blacklisted", "5 incorrect entries! Your account is now blacklisted!");
                qApp->quit();
            }
        }
    }


    QSqlQuery blacklistCheck;
    blacklistCheck.prepare("SELECT * FROM blackList WHERE IBAN = :iban");
    blacklistCheck.bindValue(":iban", ui->lineEdit->text());


    static int blacklist_attempts = 0;

    if(blacklistCheck.exec() && blacklistCheck.next()){
        blacklist_attempts++;
        QMessageBox::critical(this,"Unsuccessful", "The account you want to send is blacklisted");

        if (blacklist_attempts >= 5){
            QSqlDatabase db = QSqlDatabase::database();

            QSqlQuery move;
            move.prepare("INSERT INTO blackList (TC, ISIM, SOYISIM, IBAN, BAKIYE, SIFRE, MOMNAME, CREDIT, MONTHLYREPAY) SELECT TC, ISIM, SOYISIM, IBAN, BAKIYE, SIFRE, MOMNAME, CREDIT, MONTHLYREPAY FROM bankam WHERE TC = :tc" );
            move.bindValue(":tc", m_tc);

            if (!move.exec()) {
                qDebug() << "Insert to blacklist failed: " << move.lastError().text();
            }

            QSqlQuery del;
            del.prepare("DELETE FROM bankam WHERE TC = :tc");
            del.bindValue(":tc", m_tc);
            del.exec();

            QMessageBox::critical(this, "Blacklisted", "You tried 5 times. Your account is now blacklisted.");
            qApp->quit();
        }
    }
}


void MoneyTransfer::on_pushButton_2_clicked()
{
    this->hide();
    parentWidget()->show();
}


