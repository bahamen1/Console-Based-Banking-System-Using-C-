#ifndef DEPOSIT_H
#define DEPOSIT_H
#include <QDialog>


namespace Ui {
class Deposit;
}

class Deposit : public QDialog
{
    Q_OBJECT


public:
    explicit Deposit(QWidget *parent = nullptr, QString tc = "");
    ~Deposit();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Deposit *ui;
    QString m_tc;


};
#endif // DEPOSIT_H
