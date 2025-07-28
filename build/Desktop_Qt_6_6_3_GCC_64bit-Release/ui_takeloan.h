/********************************************************************************
** Form generated from reading UI file 'takeloan.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAKELOAN_H
#define UI_TAKELOAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Takeloan
{
public:
    QLabel *label_4;
    QPushButton *pushButton_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QLCDNumber *lcdNumber;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_6;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;

    void setupUi(QDialog *Takeloan)
    {
        if (Takeloan->objectName().isEmpty())
            Takeloan->setObjectName("Takeloan");
        Takeloan->resize(400, 300);
        Takeloan->setStyleSheet(QString::fromUtf8("background-color: #2e2e2e; color: white;"));
        label_4 = new QLabel(Takeloan);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 0, 71, 51));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/6.png")));
        label_4->setScaledContents(true);
        pushButton_2 = new QPushButton(Takeloan);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 71, 21));
        layoutWidget = new QWidget(Takeloan);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 170, 341, 121));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        verticalLayout->addWidget(lineEdit_2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout_3->addWidget(pushButton);


        verticalLayout_4->addLayout(verticalLayout_3);

        label_3 = new QLabel(Takeloan);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 20, 71, 31));
        lcdNumber = new QLCDNumber(Takeloan);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(140, 20, 181, 31));
        layoutWidget1 = new QWidget(Takeloan);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(30, 60, 341, 111));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName("label_5");

        verticalLayout_5->addWidget(label_5);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName("label_6");

        verticalLayout_5->addWidget(label_6);


        horizontalLayout_2->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        lcdNumber_2 = new QLCDNumber(layoutWidget1);
        lcdNumber_2->setObjectName("lcdNumber_2");

        verticalLayout_6->addWidget(lcdNumber_2);

        lcdNumber_3 = new QLCDNumber(layoutWidget1);
        lcdNumber_3->setObjectName("lcdNumber_3");

        verticalLayout_6->addWidget(lcdNumber_3);


        horizontalLayout_2->addLayout(verticalLayout_6);


        retranslateUi(Takeloan);

        QMetaObject::connectSlotsByName(Takeloan);
    } // setupUi

    void retranslateUi(QDialog *Takeloan)
    {
        Takeloan->setWindowTitle(QCoreApplication::translate("Takeloan", "Dialog", nullptr));
        label_4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Takeloan", "Go Back", nullptr));
        label->setText(QCoreApplication::translate("Takeloan", "Enter Amount", nullptr));
        label_2->setText(QCoreApplication::translate("Takeloan", "Repayment Months", nullptr));
        pushButton->setText(QCoreApplication::translate("Takeloan", "Proceed", nullptr));
        label_3->setText(QCoreApplication::translate("Takeloan", "Balance", nullptr));
        label_5->setText(QCoreApplication::translate("Takeloan", "Credit Left", nullptr));
        label_6->setText(QCoreApplication::translate("Takeloan", "Monthly Payment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Takeloan: public Ui_Takeloan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAKELOAN_H
