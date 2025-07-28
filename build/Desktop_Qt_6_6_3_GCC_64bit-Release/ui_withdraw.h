/********************************************************************************
** Form generated from reading UI file 'withdraw.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WITHDRAW_H
#define UI_WITHDRAW_H

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

class Ui_Withdraw
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QLabel *label_3;
    QLCDNumber *lcdNumber;

    void setupUi(QDialog *Withdraw)
    {
        if (Withdraw->objectName().isEmpty())
            Withdraw->setObjectName("Withdraw");
        Withdraw->resize(400, 300);
        Withdraw->setStyleSheet(QString::fromUtf8("background-color: #2e2e2e; color: white;"));
        layoutWidget = new QWidget(Withdraw);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 150, 331, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_2 = new QPushButton(Withdraw);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 71, 21));
        label_2 = new QLabel(Withdraw);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 0, 71, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/6.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(Withdraw);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 87, 61, 61));
        lcdNumber = new QLCDNumber(Withdraw);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(90, 87, 271, 61));
        lcdNumber->setProperty("intValue", QVariant(500));
        QWidget::setTabOrder(lineEdit, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Withdraw);

        QMetaObject::connectSlotsByName(Withdraw);
    } // setupUi

    void retranslateUi(QDialog *Withdraw)
    {
        Withdraw->setWindowTitle(QCoreApplication::translate("Withdraw", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Withdraw", "Enter Amount", nullptr));
        pushButton->setText(QCoreApplication::translate("Withdraw", "Withdraw", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Withdraw", "Go Back", nullptr));
        label_2->setText(QString());
        label_3->setText(QCoreApplication::translate("Withdraw", "Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Withdraw: public Ui_Withdraw {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WITHDRAW_H
