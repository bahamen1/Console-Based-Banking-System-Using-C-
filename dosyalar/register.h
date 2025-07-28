#ifndef REGISTER_H
#define REGISTER_H

#include <QDialog>



namespace Ui {
class Register;
}

class Register : public QDialog
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();
    void addValues(QString tc, QString isim,QString soyisim,QString iban, int bakiye, int sifre);


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Register *ui;
};

#endif // REGISTER_H
