#include "menu.h"
#include "ui_menu.h"
#include "withdraw.h"
#include "deposit.h"
#include "moneyTransfer.h"
#include "login.h"
#include "accountinfo.h"
#include "transaction.h"
#include <QLineEdit>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>
#include <QDate>




Menu::Menu(QWidget *parent, QString tc)
    : QDialog(parent)
    , ui(new Ui::Menu)
    , m_tc(tc)
{
    ui->setupUi(this);
    this->setWindowTitle("Main Menu");

    Date = new QDate;
    ui->label_3->setText(QDate::currentDate().toString("dd.MM.yyyy"));

    QSqlQuery query;
    query.prepare("SELECT ISIM FROM bankam WHERE TC = :tc");
    query.bindValue(":tc", m_tc);
    query.exec();

    if (query.next()) {
        ui->label_2->setText("Welcome " +  query.value(0).toString()+"!");

    }
}
QDate tarih1 =  QDate::currentDate();

Menu::~Menu()
{
    delete ui;
}


void Menu::on_pushButton_clicked(){

    Deposit* deposit = new Deposit(this, m_tc);
    QSqlQuery query;
    query.prepare("SELECT BAKIYE FROM bankam WHERE TC = :tc");
    query.bindValue(":tc", m_tc);
    query.exec();
    if (query.next()) {
        ui->lcdNumber->display(query.value(0).toInt());
    }

    this->hide();
    deposit -> show();
}

void Menu::on_pushButton_2_clicked()
{
    Withdraw* withdraw = new Withdraw(this, m_tc);
    QSqlQuery query;
    query.prepare("SELECT BAKIYE FROM bankam WHERE TC = :tc");
    query.bindValue(":tc", m_tc);
    query.exec();
    if (query.next()) {
        ui->lcdNumber->display(query.value(0).toInt());
    }

    this->hide();
    withdraw -> show();

}

void Menu::on_pushButton_3_clicked()
{
    moneyTransfer = new MoneyTransfer(this, m_tc);
    QSqlQuery query;
    query.prepare("SELECT BAKIYE FROM bankam WHERE TC = :tc");
    query.bindValue(":tc", m_tc);
    query.exec();
    if (query.next()) {
        ui->lcdNumber->display(query.value(0).toInt());
    }
    this->hide();
    moneyTransfer -> show();

}

void Menu::on_pushButton_4_clicked()
{

    QWidget *parentWidget = this->parentWidget();
    Login *loginPtr = (Login *)parentWidget;

    if (loginPtr) {
        loginPtr->findChild<QLineEdit*>("lineEdit_tc")->clear();
        loginPtr->findChild<QLineEdit*>("lineEdit_sifre")->clear();
        loginPtr->show();

    }

    this->hide();

    QMessageBox::information(this,"Have a Nice Day!","See you later...");

}


void Menu::showEvent(QShowEvent *event)
{
    QDialog::showEvent(event);

    QSqlQuery query;
    query.prepare("SELECT BAKIYE FROM bankam WHERE TC = :tc");
    query.bindValue(":tc", m_tc);
    if (query.exec() && query.next()) {
        ui->lcdNumber->display(query.value(0).toInt());
    } else {
        qDebug() << "Failed to refresh balance:" << query.lastError().text();
    }
}

void Menu::on_pushButton_5_clicked()
{
    takeloan = new Takeloan(this, m_tc);
    QSqlQuery query;
    query.prepare("SELECT BAKIYE FROM bankam WHERE TC = :tc");
    query.bindValue(":tc", m_tc);
    query.exec();
    if (query.next()) {
        ui->lcdNumber->display(query.value(0).toInt());
    }
    this->hide();
    takeloan -> show();

}


void Menu::on_pushButton_6_clicked()
{
    accountinfo = new Accountinfo(this, m_tc);

    QSqlQuery query;
    query.prepare("SELECT IBAN, ISIM, SOYISIM FROM bankam WHERE TC = :tc");
    query.bindValue(":tc", m_tc);
    query.exec();

    this->hide();
    accountinfo -> show();
}


void Menu::on_pushButton_7_clicked()
{
    transaction = new Transaction(this, m_tc);
    this->hide();
    transaction -> show();
}

