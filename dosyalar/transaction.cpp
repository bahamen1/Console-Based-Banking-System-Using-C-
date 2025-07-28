#include "transaction.h"
#include "ui_transaction.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QApplication>
#include <QDebug>
#include <QtSql>

Transaction::Transaction(QWidget *parent, QString tc)
    : QDialog(parent)
    , ui(new Ui::Transaction)
    , m_tc(tc)
{
    ui->setupUi(this);
    this->setWindowTitle("Transaction History");



    QSqlQuery query;
    query.prepare("SELECT TYPE, AMOUNT FROM transactions WHERE TC = :tc ORDER BY ID DESC LIMIT 5");
    query.bindValue(":tc", m_tc);


    if (!query.exec()) {
        qDebug() << "Sorgu hatası:" << query.lastError().text();
        return;
    }

    int attempts = 0;

    while (query.next()) {
        QString type = query.value("TYPE").toString();
        int amount = query.value("AMOUNT").toInt();
        QString text;


        if (type == "WITHDRAW") {
            text = QString::number(amount) + " TL has been withdrawn from your account.";
        } else if (type == "DEPOSIT") {
            text = QString::number(amount) + " TL has been deposited to your account.";
        } else if (type == "TRANSFER") {
            text = QString::number(amount) + " TL has been transferred from your account.";
        } else if (type == "LOAN") {
            text = QString::number(amount) + " TL has been loaned to your account.";
        } else {
            text = QString::number(amount) + " TL - Unknown transaction type.";
        }



        ui->listWidget->addItem(text);
        attempts++;

    }
    qDebug() << "Number of Transactions added to the List:" << attempts;
    qDebug() << "Incoming TC:" << m_tc;



}



Transaction::~Transaction()
{
    delete ui;
}

void Transaction::on_pushButton_2_clicked()
{
    this->hide();
    parentWidget()->show();
}

