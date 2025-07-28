/********************************************************************************
** Form generated from reading UI file 'accountinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTINFO_H
#define UI_ACCOUNTINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Accountinfo
{
public:
    QLabel *label_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_isim;
    QLabel *label_soyisim;
    QLabel *label_iban;

    void setupUi(QDialog *Accountinfo)
    {
        if (Accountinfo->objectName().isEmpty())
            Accountinfo->setObjectName("Accountinfo");
        Accountinfo->resize(400, 300);
        Accountinfo->setStyleSheet(QString::fromUtf8("background-color: #2e2e2e; color: white;"));
        label_4 = new QLabel(Accountinfo);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(330, 0, 71, 51));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/6.png")));
        label_4->setScaledContents(true);
        pushButton_2 = new QPushButton(Accountinfo);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(0, 0, 71, 21));
        pushButton = new QPushButton(Accountinfo);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(130, 230, 131, 26));
        layoutWidget = new QWidget(Accountinfo);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 70, 291, 141));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_isim = new QLabel(layoutWidget);
        label_isim->setObjectName("label_isim");

        verticalLayout_2->addWidget(label_isim);

        label_soyisim = new QLabel(layoutWidget);
        label_soyisim->setObjectName("label_soyisim");

        verticalLayout_2->addWidget(label_soyisim);

        label_iban = new QLabel(layoutWidget);
        label_iban->setObjectName("label_iban");

        verticalLayout_2->addWidget(label_iban);


        horizontalLayout->addLayout(verticalLayout_2);

        QWidget::setTabOrder(pushButton, pushButton_2);

        retranslateUi(Accountinfo);

        QMetaObject::connectSlotsByName(Accountinfo);
    } // setupUi

    void retranslateUi(QDialog *Accountinfo)
    {
        Accountinfo->setWindowTitle(QCoreApplication::translate("Accountinfo", "Dialog", nullptr));
        label_4->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("Accountinfo", "Go Back", nullptr));
        pushButton->setText(QCoreApplication::translate("Accountinfo", "Change Password", nullptr));
        label_2->setText(QCoreApplication::translate("Accountinfo", "Name :", nullptr));
        label_3->setText(QCoreApplication::translate("Accountinfo", "Surname :", nullptr));
        label->setText(QCoreApplication::translate("Accountinfo", "Iban:       TR", nullptr));
        label_isim->setText(QCoreApplication::translate("Accountinfo", "TextLabel", nullptr));
        label_soyisim->setText(QCoreApplication::translate("Accountinfo", "TextLabel", nullptr));
        label_iban->setText(QCoreApplication::translate("Accountinfo", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Accountinfo: public Ui_Accountinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTINFO_H
