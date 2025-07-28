/********************************************************************************
** Form generated from reading UI file 'moneyTransfer.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONEYTRANSFER_H
#define UI_MONEYTRANSFER_H

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

class Ui_MoneyTransfer
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *lcdNumber;

    void setupUi(QDialog *MoneyTransfer)
    {
        if (MoneyTransfer->objectName().isEmpty())
            MoneyTransfer->setObjectName("MoneyTransfer");
        MoneyTransfer->resize(400, 300);
        MoneyTransfer->setStyleSheet(QString::fromUtf8("background-color: #2e2e2e; color: white;"));
        layoutWidget = new QWidget(MoneyTransfer);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 110, 321, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setFlat(false);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(MoneyTransfer);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 71, 21));
        label_3 = new QLabel(MoneyTransfer);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 0, 71, 51));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/6.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(MoneyTransfer);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 50, 71, 61));
        lcdNumber = new QLCDNumber(MoneyTransfer);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(110, 50, 251, 61));
        lcdNumber->setProperty("intValue", QVariant(500));
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(MoneyTransfer);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MoneyTransfer);
    } // setupUi

    void retranslateUi(QDialog *MoneyTransfer)
    {
        MoneyTransfer->setWindowTitle(QCoreApplication::translate("MoneyTransfer", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("MoneyTransfer", "IBAN : TR", nullptr));
        label_2->setText(QCoreApplication::translate("MoneyTransfer", "Amount :", nullptr));
        pushButton->setText(QCoreApplication::translate("MoneyTransfer", "Send", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MoneyTransfer", "Go Back", nullptr));
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("MoneyTransfer", "Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoneyTransfer: public Ui_MoneyTransfer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONEYTRANSFER_H
