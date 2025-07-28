#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <QDialog>

namespace Ui {
class Transaction;
}

class Transaction : public QDialog
{
    Q_OBJECT

public:
    explicit Transaction(QWidget *parent = nullptr, QString tc = "");
    ~Transaction();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Transaction *ui;
    QString m_tc;
};

#endif // TRANSACTION_H
