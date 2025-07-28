/********************************************************************************
** Form generated from reading UI file 'changepass.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASS_H
#define UI_CHANGEPASS_H

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

class Ui_changepass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;

    void setupUi(QDialog *changepass)
    {
        if (changepass->objectName().isEmpty())
            changepass->setObjectName("changepass");
        changepass->resize(400, 300);
        changepass->setStyleSheet(QString::fromUtf8("background-color: #2e2e2e; color: white;"));
        layoutWidget = new QWidget(changepass);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 110, 331, 98));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::Password);

        verticalLayout_3->addWidget(lineEdit_2);


        horizontalLayout_2->addLayout(verticalLayout_3);


        horizontalLayout->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        label_2 = new QLabel(changepass);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 0, 71, 51));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/6.png")));
        label_2->setScaledContents(true);
        pushButton_2 = new QPushButton(changepass);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 71, 21));

        retranslateUi(changepass);

        QMetaObject::connectSlotsByName(changepass);
    } // setupUi

    void retranslateUi(QDialog *changepass)
    {
        changepass->setWindowTitle(QCoreApplication::translate("changepass", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("changepass", "New Password:", nullptr));
        label_3->setText(QCoreApplication::translate("changepass", "New Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("changepass", "Change", nullptr));
        label_2->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("changepass", "Go Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changepass: public Ui_changepass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASS_H
