#include "deposit.h"
#include "ui_deposit.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>

Deposit::Deposit(QWidget *parent, QString tc)
    : QDialog(parent)
    , ui(new Ui::Deposit)
    , m_tc(tc)
{
    ui->setupUi(this);
    this->setWindowTitle("Deposit");
    ui->lineEdit->setPlaceholderText("Enter Amount");


    QSqlQuery query;
    query.prepare("SELECT BAKIYE FROM bankam WHERE TC = :tc");
    query.bindValue(":tc", m_tc);
    query.exec();
    if (query.next()) {
        ui->lcdNumber->display(query.value(0).toInt());

        QSqlQuery query;
        query.prepare("SELECT BAKIYE FROM bankam WHERE TC = :TC");
        query.bindValue(":TC" , tc);

        if (query.exec()) {
            if (query.next()) {
                int bakiye = query.value("BAKIYE").toInt();
                ui->lcdNumber->display(bakiye);
            } else {
                QMessageBox::warning(this, "User Not Found!", "There are no records matching your T.C. !");
            }
        } else {
            QMessageBox::critical(this, "Database Error!", query.lastError().text());
        }

    }
}

Deposit::~Deposit()

{
    delete ui;
}

void Deposit::on_pushButton_clicked()
{
    bool ok;
    int miktar = ui->lineEdit->text().toInt(&ok);

    QSqlQuery select;
    select.prepare("SELECT BAKIYE FROM bankam WHERE TC = :tc");
    select.bindValue(":tc", m_tc);
    select.exec();

    if (select.next()) {
        if(miktar>0){
            int bakiye = select.value(0).toInt();
            int yeniBakiye = bakiye + miktar;

            QSqlQuery update;
            update.prepare("UPDATE bankam SET BAKIYE = :b WHERE TC = :tc");
            update.bindValue(":b", yeniBakiye);
            update.bindValue(":tc", m_tc);
            update.exec();

            ui->lcdNumber->display(yeniBakiye);
            QMessageBox::information(this, "Successful", "Money was deposited!");

            QSqlQuery log;
            log.exec("INSERT INTO transactions (TC, TYPE, AMOUNT) VALUES ('" + m_tc + "', 'DEPOSIT', " + QString::number(miktar) + ")");



        }

        if(miktar<=0){

            QMessageBox::critical(this,"Error","Enter Valid Amount!");
        }
    }
}

void Deposit::on_pushButton_2_clicked()
{
    this->hide();
    parentWidget()->show();

}
