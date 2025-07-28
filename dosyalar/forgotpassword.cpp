#include "forgotpassword.h"
#include "ui_forgotpassword.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>

Forgotpassword::Forgotpassword(QWidget *parent, QString tc)
    : QDialog(parent)
    , ui(new Ui::Forgotpassword)
    , m_tc(tc)

{
    ui->setupUi(this);
    this->setWindowTitle("Forgot Password");
    ui->lineEdit->setPlaceholderText("Enter T.C.");
    ui->lineEdit_2->setPlaceholderText("Enter Mother's Name");



}

Forgotpassword::~Forgotpassword()
{
    delete ui;
}

void Forgotpassword::on_pushButton_clicked()
{
    QString tc = ui->lineEdit->text();
    QString anneAdi = ui->lineEdit_2->text();


    QSqlQuery query;
    query.prepare("SELECT * FROM bankam WHERE TC = :tc AND MOMNAME = :momname");
    query.bindValue(":tc", tc);
    query.bindValue(":momname", anneAdi);


    if(query.exec()){
        if(query.next()){
            QMessageBox::information(this,"Successful","Identity Verified!");

            changepass * Changepass = new changepass(this, tc);
            this->hide();
            Changepass->show();

        }

        else if(!query.next()) {
            QMessageBox::warning(this, "Incorrect Information", "T.C. Number or Mother's Name is incorrect!");
        }
    }
}
void Forgotpassword::on_pushButton_2_clicked()
{
    this->hide();
    parentWidget()->show();
}

