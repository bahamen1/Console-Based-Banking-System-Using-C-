#include "takeloan.h"
#include "ui_takeloan.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QApplication>

Takeloan::Takeloan(QWidget *parent, QString tc)
    : QDialog(parent)
    , ui(new Ui::Takeloan)
    , m_tc(tc)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("Enter Amount");
    ui->lineEdit_2->setPlaceholderText("Enter Repayment Months");
    this->setWindowTitle("Credit Page");



    QSqlQuery query;
    query.prepare("SELECT BAKIYE FROM bankam WHERE TC = :tc");
    query.bindValue(":tc", m_tc);
    query.exec();
    if (query.next()) {
        ui->lcdNumber->display(query.value(0).toInt());

        QSqlQuery query;
        query.prepare("SELECT BAKIYE FROM bankam WHERE TC = :tc");
        query.bindValue(":tc" , tc);

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

    QSqlQuery query1;
    query1.prepare("SELECT CREDIT FROM bankam WHERE TC = :tc");
    query1.bindValue(":tc" , m_tc);

    if (query1.exec()) {
        if (query1.next()) {
            int credit = query1.value("CREDIT").toInt();
            ui->lcdNumber_2->display(credit);
        }
    }
    QSqlQuery query2;
    query2.prepare("SELECT MONTHLYREPAY FROM bankam WHERE TC = :tc");
    query2.bindValue(":tc" , m_tc);

    if (query2.exec()) {
        if (query2.next()) {
            int monthlyrepay = query2.value("MONTHLYREPAY").toInt();
            ui->lcdNumber_3->display(monthlyrepay);
        }
    }

}
Takeloan::~Takeloan()
{
    delete ui;
}


void Takeloan::on_pushButton_clicked()
{
    int miktar = ui->lineEdit->text().toInt();
    int vade = ui->lineEdit_2->text().toInt();

    QSqlQuery select;
    select.prepare("SELECT BAKIYE FROM bankam WHERE TC = :tc");
    select.bindValue(":tc", m_tc);
    select.exec();


    QSqlQuery select1;
    select1.prepare("SELECT CREDIT FROM bankam WHERE TC = :tc");
    select1.bindValue(":tc" , m_tc);
    select1.exec();


    QSqlQuery select2;
    select2.prepare("SELECT MONTHLYREPAY FROM bankam WHERE TC = :tc");
    select2.bindValue(":tc", m_tc);
    select2.exec();



    if (select.next() && select1.next() && select2.next() && miktar > 0 && vade > 0) {
        if(miktar>0){

            int bakiye = select.value(0).toInt();
            int yeniBakiye = bakiye + miktar;

            QSqlQuery update;
            update.prepare("UPDATE bankam SET BAKIYE = :b WHERE TC = :tc");
            update.bindValue(":b", yeniBakiye);
            update.bindValue(":tc", m_tc);
            update.exec();



            QMessageBox::information(this, "Successful", "Money was loaned!");



            int kredi = select1.value("CREDIT").toInt();
            int credit = kredi + miktar;

            QSqlQuery update1;
            update1.prepare("UPDATE bankam SET CREDIT = :c WHERE TC = :tc");
            update1.bindValue(":c", credit);
            update1.bindValue(":tc", m_tc);
            update1.exec();



            int oncekiMonthlyRepay = select2.value("MONTHLYREPAY").toInt();
            int yeniAylikOdeme = miktar / vade;
            int monthlyrepay = oncekiMonthlyRepay + yeniAylikOdeme;





            QSqlQuery update2;
            update2.prepare("UPDATE bankam SET MONTHLYREPAY = :d WHERE TC = :tc");
            update2.bindValue(":d", monthlyrepay);
            update2.bindValue(":tc", m_tc);
            update2.exec();


            QMessageBox::information(this, "Succesfull", "Your monthly payment has been calculated.");


            ui->lcdNumber->display(yeniBakiye);
            ui->lcdNumber_2->display(credit);
            ui->lcdNumber_3->display(monthlyrepay);

            QSqlQuery log;
            log.exec("INSERT INTO transactions (TC, TYPE, AMOUNT) VALUES ('" + m_tc + "', 'LOAN', " + QString::number(miktar) + ")");






        }

    }


    else {
        QMessageBox::warning(this, "Error", "Enter Valid Number!");
    }
}
void Takeloan::on_pushButton_2_clicked()
{
    this->hide();
    parentWidget()->show();
}
