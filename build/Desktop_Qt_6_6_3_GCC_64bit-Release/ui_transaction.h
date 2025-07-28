/********************************************************************************
** Form generated from reading UI file 'transaction.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSACTION_H
#define UI_TRANSACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Transaction
{
public:
    QPushButton *pushButton_2;
    QListWidget *listWidget;

    void setupUi(QDialog *Transaction)
    {
        if (Transaction->objectName().isEmpty())
            Transaction->setObjectName("Transaction");
        Transaction->resize(400, 300);
        Transaction->setStyleSheet(QString::fromUtf8("background-color: #2e2e2e; color: white;"));
        pushButton_2 = new QPushButton(Transaction);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 71, 21));
        listWidget = new QListWidget(Transaction);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 30, 381, 261));

        retranslateUi(Transaction);

        QMetaObject::connectSlotsByName(Transaction);
    } // setupUi

    void retranslateUi(QDialog *Transaction)
    {
        Transaction->setWindowTitle(QCoreApplication::translate("Transaction", "Dialog", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Transaction", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Transaction: public Ui_Transaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSACTION_H
