#ifndef MONEYTRANSFER_H
#define MONEYTRANSFER_H

#include <QDialog>

namespace Ui {
class MoneyTransfer;
}

class MoneyTransfer : public QDialog
{
    Q_OBJECT

public:
    explicit MoneyTransfer(QWidget *parent = nullptr, QString tc = "");
    ~MoneyTransfer();

private slots:


    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MoneyTransfer *ui;
    QString m_tc;
    QString recipientIban;
    int attempts = 0;

};

#endif // MONEYTRANSFER_H
