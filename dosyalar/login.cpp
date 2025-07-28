#include "login.h"
#include "ui_login.h"
#include <QMessageBox>
#include <QDate>
#include <QLineEdit>
#include "menu.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>


Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{

    ui->setupUi(this);
    this->setWindowTitle("Login Screen");
    ui->lineEdit_sifre->setPlaceholderText("Enter Password");
    ui->lineEdit_tc->setPlaceholderText("Enter T.C.");


    date = new QDate;
    ui->label_4->setText(QDate::currentDate().toString("dd.MM.yyyy"));

}
QDate tarih =  QDate::currentDate();


Login::~Login()
{
    delete ui;
}


void Login::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::database();

    QString tc = ui ->lineEdit_tc->text();
    int password = ui ->lineEdit_sifre->text().toInt();


    QSqlQuery BlackList;
    BlackList.prepare("SELECT TC FROM blackList WHERE TC = :TC");
    BlackList.bindValue(":TC", tc);

    if (!BlackList.exec()) {
        QMessageBox::critical(this, "Database Error", BlackList.lastError().text());
        return;
    }

    if (BlackList.next()) {
        QMessageBox::critical(this, "Access Denied", "Your account is blacklisted. You cannot log in.");
        return;
    }


    QSqlQuery query;
    query.prepare("SELECT * FROM bankam WHERE TC = :TC AND SIFRE = :SIFRE");
    query.bindValue(":TC", tc);
    query.bindValue(":SIFRE", password);


    if (!query.exec()) {
        QMessageBox::warning(this,"Query Error","Query Failed...");
    }
    if (query.next()) {
        QString name = query.value("ISIM").toString();
        QMessageBox::information(this, "Login Successful", "Welcome " + name );
        hide();
        Menu *menu = new Menu(this, tc);
        menu->show();

    }

    else {
        QMessageBox::warning(this, "Incorrect Entry", "T.C. or Password is incorrect!");
        attempts++; {


            if (attempts >= 5) {
                QSqlQuery moveQuery;
                moveQuery.prepare(R"(
                    INSERT INTO blacklist (TC, ISIM, SOYISIM, IBAN, BAKIYE, SIFRE)
                    SELECT TC, ISIM, SOYISIM, IBAN, BAKIYE, SIFRE FROM bankam WHERE TC = :TC
                    )");
                moveQuery.bindValue(":TC", tc);
                moveQuery.exec();

                QSqlQuery deleteQuery;
                deleteQuery.prepare("DELETE FROM bankam WHERE TC = :TC");
                deleteQuery.bindValue(":TC", tc);
                deleteQuery.exec();

                QMessageBox::critical(this, "Account Blacklisted", "5 incorrect entries! Your account is now blacklisted!");
                qApp->quit();
            }
        }
    }
}




void Login::on_pushButton_2_clicked()
{
    m_register = new Register(this);
    this->hide();
    m_register -> show();
}


void Login::on_pushButton_3_clicked()
{
    forgotpassword = new Forgotpassword(this);
    this->hide();
    forgotpassword -> show();
}

