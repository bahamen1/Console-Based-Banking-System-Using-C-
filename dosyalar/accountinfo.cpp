#include "accountinfo.h"
#include "ui_accountinfo.h"
#include "changepass.h"
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QDebug>


Accountinfo::Accountinfo(QWidget *parent, QString tc)
    : QDialog(parent)
    , ui(new Ui::Accountinfo)
    , m_tc(tc)
{
    ui->setupUi(this);
    this->setWindowTitle("Account Information");

    QSqlQuery query;
    query.prepare("SELECT IBAN, ISIM, SOYISIM FROM bankam WHERE TC = :tc");
    query.bindValue(":tc", m_tc);

    if(query.exec() && query.next()){
        QString iban = query.value("IBAN").toString();
        QString isim = query.value("ISIM").toString();
        QString soyisim = query.value("SOYISIM").toString();




        ui->label_iban->setText(iban);
        ui->label_isim->setText(isim);
        ui->label_soyisim->setText(soyisim);

    }
    else {
        qDebug() << "No matching user found.";
    }
}



Accountinfo::~Accountinfo()
{
    delete ui;

}

void Accountinfo::on_pushButton_2_clicked()
{
    this->hide();
    parentWidget()->show();
}


void Accountinfo::on_pushButton_clicked()
{
    Changepass = new changepass(this, m_tc);
    this->hide();
    Changepass->show();
}

