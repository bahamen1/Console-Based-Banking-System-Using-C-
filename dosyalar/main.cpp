#include "login.h"
#include <QApplication>
#include <QDebug>
#include <QtSql>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


    qDebug()<< "start";



    QSqlDatabase db;
    db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/home/bahamen/Banka/dosyalar/bankam.db");

    if(!db.open()){
        qDebug()<<"DATABASE COULD NOT OPEN!";
    }

    QString query = "CREATE TABLE IF NOT EXISTS bankam ("
                    "TC VARCHAR(12),"
                    "ISIM VARCHAR(20),"
                    "SOYISIM VARCHAR(20),"
                    "SIFRE INTEGER);";

    QSqlQuery qry;


    if(!qry.exec(query)){
        qDebug()<<"Error of creating table"<<qry.lastError().text();

    }



    QSqlDatabase db1 = QSqlDatabase::database();
    db1.setDatabaseName("/home/bahamen/Banka/dosyalar/bankam.db");

    if(!db1.open()){
        qDebug()<<"DATABASE COULD NOT OPEN!";
    }

    QString query1 = "CREATE TABLE IF NOT EXISTS blackList ("
                     "TC VARCHAR(12),"
                     "ISIM VARCHAR(20),"
                     "SOYISIM VARCHAR(20),"
                     "SIFRE INTEGER);";

    QSqlQuery qry1;


    if(!qry1.exec(query1)){
        qDebug()<<"Error of creating table"<<qry1.lastError().text();
    }






    QSqlDatabase db2 = QSqlDatabase::database();
    db2.setDatabaseName("/home/bahamen/Banka/dosyalar/bankam.db");

    if(!db2.open()){
        qDebug()<<"DATABASE COULD NOT OPEN!";
    }



    QString query2 = "CREATE TABLE IF NOT EXISTS transactions ("
                     "ID INTEGER PRIMARY KEY AUTOINCREMENT,"
                     "TC TEXT,"
                     "TYPE TEXT,"
                     "AMOUNT INTEGER);";

    QSqlQuery qry2;


    if (!qry2.exec(query2)) {
        qDebug() << "Transactions table can not be created" << qry2.lastError().text();
    }




    qDebug()<< "end";

    Login w;
    w.show();

    return a.exec();
}
