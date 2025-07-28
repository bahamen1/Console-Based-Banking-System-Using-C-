/********************************************************************************
** Form generated from reading UI file 'forgotpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGOTPASSWORD_H
#define UI_FORGOTPASSWORD_H

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

class Ui_Forgotpassword
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_3;

    void setupUi(QDialog *Forgotpassword)
    {
        if (Forgotpassword->objectName().isEmpty())
            Forgotpassword->setObjectName("Forgotpassword");
        Forgotpassword->resize(400, 300);
        Forgotpassword->setStyleSheet(QString::fromUtf8("background-color: #2e2e2e; color: white;"));
        layoutWidget = new QWidget(Forgotpassword);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(50, 90, 301, 111));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
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

        pushButton_2 = new QPushButton(Forgotpassword);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 71, 21));
        label_3 = new QLabel(Forgotpassword);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(330, 0, 71, 51));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/6.png")));
        label_3->setScaledContents(true);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Forgotpassword);

        QMetaObject::connectSlotsByName(Forgotpassword);
    } // setupUi

    void retranslateUi(QDialog *Forgotpassword)
    {
        Forgotpassword->setWindowTitle(QCoreApplication::translate("Forgotpassword", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Forgotpassword", "T.C. Number", nullptr));
        label_2->setText(QCoreApplication::translate("Forgotpassword", "Mother's name", nullptr));
        pushButton->setText(QCoreApplication::translate("Forgotpassword", "Forgot Password", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Forgotpassword", "Go Back", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Forgotpassword: public Ui_Forgotpassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGOTPASSWORD_H
