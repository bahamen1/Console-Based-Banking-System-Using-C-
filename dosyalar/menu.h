#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "deposit.h"
#include "withdraw.h"
#include "moneyTransfer.h"
#include "takeloan.h"
#include "accountinfo.h"
#include "transaction.h"

namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent= nullptr, QString tc = "");
    ~Menu();

    int bakiye;QString tc;


protected:
    void showEvent(QShowEvent *event) override;



private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();




    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Menu *ui;
    Deposit *deposit;
    Withdraw *withdraw;
    MoneyTransfer *moneyTransfer;
    QString m_tc;
    Takeloan *takeloan;
    Accountinfo *accountinfo;
    QDate *Date;
    Transaction *transaction;




};

#endif // THIRDDIALOG_H
