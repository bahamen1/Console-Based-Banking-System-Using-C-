#include "withdraw.h"
#include "ui_withdraw.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>


Withdraw::Withdraw(QWidget *parent, QString tc)
    : QDialog(parent)
    , ui(new Ui::Withdraw)
    , m_tc(tc)

{
    ui->setupUi(this);
    this->setWindowTitle("Withdraw");
    ui->lineEdit->setPlaceholderText("Enter Amount");


    QSqlQuery query;
    query.prepare("SELECT BAKIYE FROM bankam WHERE TC = :TC");
    query.bindValue(":TC" , tc);

    if (query.exec()) {
        if (query.next()) {
            int bakiye = query.value("BAKIYE").toInt();
            ui->lcdNumber->display(bakiye);
        }

        else {
            QMessageBox::warning(this, "User Not Found", "There are no records matching your T.C. !");
        }
    }

    else {
        QMessageBox::critical(this, "Database Error!", query.lastError().text());
    }
}


Withdraw::~Withdraw()
{
    delete ui;

}

void Withdraw::on_pushButton_clicked()
{
    int miktar = ui->lineEdit->text().toInt();



    QSqlQuery select;
    select.prepare("SELECT BAKIYE FROM bankam WHERE TC = :tc");
    select.bindValue(":tc", m_tc);
    select.exec();

    if (select.next()) {
        if(miktar>0){

            int bakiye = select.value(0).toInt();
            int yeniBakiye = bakiye - miktar;

            if(yeniBakiye<0){
                QMessageBox::critical(this,"Unsuccesful","Not Enough Money!");
            }

            if(yeniBakiye>=0){

                QSqlQuery update;
                update.prepare("UPDATE bankam SET BAKIYE = :b WHERE TC = :tc");
                update.bindValue(":b", yeniBakiye);
                update.bindValue(":tc", m_tc);
                update.exec();

                ui->lcdNumber->display(yeniBakiye);
                QMessageBox::information(this, "Successful", "Money was withdrawn!");

                QSqlQuery log;
                log.exec("INSERT INTO transactions (TC, TYPE, AMOUNT) VALUES ('" + m_tc + "', 'WITHDRAW', " + QString::number(miktar) + ")");

            }
        }


        if(miktar<=0){
            QMessageBox::critical(this,"Error","Enter Valid Amount!");
        }
    }

    else {
        QMessageBox::warning(this, "Error", "Enter Valid Number!");

    }
}


void Withdraw::on_pushButton_2_clicked()
{
    this->hide();
    parentWidget()->show();

}
