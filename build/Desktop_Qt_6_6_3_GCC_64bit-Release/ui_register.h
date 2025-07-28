/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *text_isim;
    QLineEdit *text_soyisim;
    QLineEdit *text_tc;
    QLineEdit *text_sifre;
    QLineEdit *text_momname;
    QPushButton *pushButton;
    QLabel *label_4;

    void setupUi(QDialog *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName("Register");
        Register->resize(400, 300);
        Register->setStyleSheet(QString::fromUtf8("background-color: #2e2e2e; color: white;"));
        pushButton_2 = new QPushButton(Register);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 71, 21));
        layoutWidget = new QWidget(Register);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 50, 291, 201));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        text_isim = new QLineEdit(layoutWidget);
        text_isim->setObjectName("text_isim");

        verticalLayout_2->addWidget(text_isim);

        text_soyisim = new QLineEdit(layoutWidget);
        text_soyisim->setObjectName("text_soyisim");

        verticalLayout_2->addWidget(text_soyisim);

        text_tc = new QLineEdit(layoutWidget);
        text_tc->setObjectName("text_tc");

        verticalLayout_2->addWidget(text_tc);

        text_sifre = new QLineEdit(layoutWidget);
        text_sifre->setObjectName("text_sifre");

        verticalLayout_2->addWidget(text_sifre);

        text_momname = new QLineEdit(layoutWidget);
        text_momname->setObjectName("text_momname");

        verticalLayout_2->addWidget(text_momname);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout_3->addWidget(pushButton);

        label_4 = new QLabel(Register);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 0, 71, 51));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/6.png")));
        label_4->setScaledContents(true);
        QWidget::setTabOrder(text_isim, text_soyisim);
        QWidget::setTabOrder(text_soyisim, text_tc);
        QWidget::setTabOrder(text_tc, text_sifre);
        QWidget::setTabOrder(text_sifre, text_momname);
        QWidget::setTabOrder(text_momname, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Register);

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QDialog *Register)
    {
        Register->setWindowTitle(QCoreApplication::translate("Register", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Register", "Go Back", nullptr));
        label->setText(QCoreApplication::translate("Register", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("Register", "Surname", nullptr));
        label_3->setText(QCoreApplication::translate("Register", "T.C.", nullptr));
        label_6->setText(QCoreApplication::translate("Register", "Password", nullptr));
        label_7->setText(QCoreApplication::translate("Register", "Mom Name", nullptr));
        pushButton->setText(QCoreApplication::translate("Register", "Sign Up", nullptr));
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
