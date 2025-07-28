#ifndef FORGOTPASSWORD_H
#define FORGOTPASSWORD_H

#include <QDialog>
#include <changepass.h>

namespace Ui {
class Forgotpassword;
}

class Forgotpassword : public QDialog
{
    Q_OBJECT

public:
    explicit Forgotpassword(QWidget *parent = nullptr, QString tc = "");
    ~Forgotpassword();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Forgotpassword *ui;
    QString m_tc;
    changepass *Changepass;

};

#endif // FORGOTPASSWORD_H
