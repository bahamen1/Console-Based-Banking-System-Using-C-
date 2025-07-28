#include "register.h"
#include "ui_register.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QApplication>
#include <QRegularExpression>
#include <QRegularExpressionMatch>



Register::Register(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register)
{
    ui->setupUi(this);
    this->setWindowTitle("Sign Up");
    ui->text_isim->setPlaceholderText("Enter Name");
    ui->text_soyisim->setPlaceholderText("Enter Last Name");
    ui->text_tc->setPlaceholderText("Enter T.C.");
    ui->text_sifre->setPlaceholderText("Enter Password");
    ui->text_momname->setPlaceholderText("Enter Mom Name");



}

Register::~Register()
{
    delete ui;
}

void Register::on_pushButton_clicked(){

    QSqlDatabase db = QSqlDatabase::database();


    QSqlQuery qry;

    qry.prepare("INSERT INTO bankam ("
                "TC,"
                "ISIM,"
                "SOYISIM,"
                "SIFRE,"
                "MOMNAME)"
                "VALUES (?,?,?,?,?);");

    QString sifreStr = ui->text_sifre->text().trimmed();

    QRegularExpression regexSifre("^\\d{6}$");
    if (!regexSifre.match(sifreStr).hasMatch()) {
        QMessageBox::warning(this, "Invalid Password", "Password must consist of 6 digits only!");
        return;
    }
    int sifre = sifreStr.toInt();



    QString tcStr = ui->text_tc->text().trimmed();

    QRegularExpression regexTc("^\\d{11}$");
    if (!regexTc.match(tcStr).hasMatch()) {
        QMessageBox::warning(this, "Invalid Password", "Your Turkish ID number must consist of 11 digits!");
        return;
    }

    QString tc = tcStr;


    QString isim = ui->text_isim->text();
    QString soyisim = ui->text_soyisim->text();
    QString momname = ui->text_momname->text();



    qry.addBindValue(tc);
    qry.addBindValue(isim);
    qry.addBindValue(soyisim);
    qry.addBindValue(sifre);
    qry.addBindValue(momname);



    if(!qry.exec()){

        qDebug()<<"Error adding values to database!";

    }
    else{

        QMessageBox::information(this, "Registration Successful", "Congratulations!");

        this->hide();
        parentWidget()->show();
    }

}



void Register::on_pushButton_2_clicked()
{
    this->hide();
    parentWidget()->show();
}

