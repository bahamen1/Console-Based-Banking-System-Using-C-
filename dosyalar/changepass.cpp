#include "changepass.h"
#include "qregularexpression.h"
#include "ui_changepass.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlDatabase>

changepass::changepass(QWidget *parent, QString tc)
    : QDialog(parent)
    , ui(new Ui::changepass)
    , m_tc(tc)
{
    ui->setupUi(this);
    this->setWindowTitle("Change Password");
    ui->lineEdit->setPlaceholderText("Enter New Password");
    ui->lineEdit_2->setPlaceholderText("Enter New Password Again");


}

changepass::~changepass()
{
    delete ui;
}

void changepass::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::database();


    int yeniSifre2 = ui->lineEdit_2->text().toInt();
    int yeniSifre = ui->lineEdit->text().toInt();
    QString tc = m_tc;


    QSqlQuery qry;

    if(yeniSifre==yeniSifre2){
        qry.prepare("UPDATE bankam SET SIFRE = :sifre WHERE TC = :tc");
        qry.bindValue(":sifre", yeniSifre);
        qry.bindValue(":tc", m_tc);
    }

    if (qry.exec()) {
        if(yeniSifre==yeniSifre2){

            QString sifreStr = ui->lineEdit->text().trimmed();


            QRegularExpression regexSifre("^\\d{6}$");
            if (!regexSifre.match(sifreStr).hasMatch()) {
                QMessageBox::warning(this, "Invalid Password", "Password must consist of 6 digits only!");
                return;
            }
            QMessageBox::information(this, "Successful", "Password changed successfully.");
            this->hide();
            parentWidget()->parentWidget()->show();
        }
    } else {
        QMessageBox::warning(this, "Warning", "Passwords may not match. Update not made.");
    }
    qDebug() << "New Password:" << yeniSifre << ", TC:" << tc;

}

void changepass::on_pushButton_2_clicked()
{
    this->hide();
    parentWidget()->show();
}
