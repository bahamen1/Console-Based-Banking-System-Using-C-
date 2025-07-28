#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include "menu.h"
#include <QLineEdit>
#include "register.h"
#include "forgotpassword.h"



QT_BEGIN_NAMESPACE

namespace Ui {
class Login;
}
QT_END_NAMESPACE

class Login : public QMainWindow
{
    Q_OBJECT

public:
    Login(QWidget *parent= nullptr);
    ~Login();




private slots:
    void on_pushButton_clicked();


    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Login *ui;
    int attempts = 0;
    QDate *date;
    Menu *menu;
    Register *m_register;
    Forgotpassword *forgotpassword;


};
#endif // LOGIN_H
