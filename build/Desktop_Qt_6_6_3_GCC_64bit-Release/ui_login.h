/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralwidget;
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_tc;
    QLineEdit *lineEdit_sifre;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QMenuBar *menubar;
    QMenu *menuBaha_Bank;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName("Login");
        Login->resize(564, 462);
        Login->setAutoFillBackground(false);
        Login->setStyleSheet(QString::fromUtf8("background-color: #2e2e2e; color: white;"));
        centralwidget = new QWidget(Login);
        centralwidget->setObjectName("centralwidget");
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(260, 50, 291, 331));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/6.png")));
        label_3->setScaledContents(true);
        label_3->setWordWrap(false);
        label_3->setOpenExternalLinks(false);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 140, 241, 179));
        QFont font;
        font.setPointSize(13);
        layoutWidget->setFont(font);
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        lineEdit_tc = new QLineEdit(layoutWidget);
        lineEdit_tc->setObjectName("lineEdit_tc");
        lineEdit_tc->setFont(font);

        verticalLayout_2->addWidget(lineEdit_tc);

        lineEdit_sifre = new QLineEdit(layoutWidget);
        lineEdit_sifre->setObjectName("lineEdit_sifre");
        lineEdit_sifre->setFont(font);
        lineEdit_sifre->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(lineEdit_sifre);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFont(font);

        verticalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout_3->addWidget(pushButton_2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(480, 0, 81, 20));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(60, 330, 131, 21));
        Login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 564, 23));
        menuBaha_Bank = new QMenu(menubar);
        menuBaha_Bank->setObjectName("menuBaha_Bank");
        Login->setMenuBar(menubar);
        statusbar = new QStatusBar(Login);
        statusbar->setObjectName("statusbar");
        Login->setStatusBar(statusbar);

        menubar->addAction(menuBaha_Bank->menuAction());

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "MainWindow", nullptr));
        label_3->setText(QString());
        label->setText(QCoreApplication::translate("Login", "T.C. Number", nullptr));
        label_2->setText(QCoreApplication::translate("Login", "Password", nullptr));
        pushButton->setText(QCoreApplication::translate("Login", "Login", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Login", "Register", nullptr));
        label_4->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("Login", "Forgot Password", nullptr));
        menuBaha_Bank->setTitle(QCoreApplication::translate("Login", "Baha Bank", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
