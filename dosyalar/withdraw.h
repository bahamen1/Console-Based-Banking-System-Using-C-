#ifndef WITHDRAW_H
#define WITHDRAW_H

#include <QDialog>

namespace Ui {
class Withdraw;

}

class Withdraw : public QDialog
{
    Q_OBJECT

public:
    explicit Withdraw(QWidget *parent = nullptr, QString tc = "");
    ~Withdraw();


private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



private:
    Ui:: Withdraw *ui;
    QString m_tc;


};

#endif // WITHDRAW_H
