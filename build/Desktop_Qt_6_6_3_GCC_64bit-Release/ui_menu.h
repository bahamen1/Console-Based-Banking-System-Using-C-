/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_7;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_6;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLCDNumber *lcdNumber;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName("Menu");
        Menu->resize(468, 279);
        Menu->setMouseTracking(false);
        Menu->setStyleSheet(QString::fromUtf8("background-color: #2e2e2e; color: white;"));
        label = new QLabel(Menu);
        label->setObjectName("label");
        label->setGeometry(QRect(400, 0, 71, 51));
        label->setMouseTracking(false);
        label->setTabletTracking(false);
        label->setPixmap(QPixmap(QString::fromUtf8(":/6.png")));
        label->setScaledContents(true);
        layoutWidget = new QWidget(Menu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 130, 461, 131));
        layoutWidget->setMouseTracking(false);
        layoutWidget->setTabletTracking(false);
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setMouseTracking(false);
        pushButton->setTabletTracking(false);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMouseTracking(false);
        pushButton_2->setTabletTracking(false);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMouseTracking(false);
        pushButton_3->setTabletTracking(false);

        horizontalLayout->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout->addWidget(pushButton_5);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMouseTracking(false);
        pushButton_4->setTabletTracking(false);

        horizontalLayout_3->addWidget(pushButton_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName("pushButton_7");

        horizontalLayout_3->addWidget(pushButton_7);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName("pushButton_6");

        horizontalLayout_3->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_3);

        label_2 = new QLabel(Menu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 30, 381, 18));
        label_3 = new QLabel(Menu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 261, 18));
        label_4 = new QLabel(Menu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 70, 81, 57));
        label_4->setFocusPolicy(Qt::NoFocus);
        label_4->setFrameShadow(QFrame::Plain);
        label_4->setTextFormat(Qt::AutoText);
        lcdNumber = new QLCDNumber(Menu);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(90, 70, 381, 61));
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_7);
        QWidget::setTabOrder(pushButton_7, pushButton_4);

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QCoreApplication::translate("Menu", "Dialog", nullptr));
        label->setText(QString());
        pushButton->setText(QCoreApplication::translate("Menu", "Deposit", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Menu", "Withdraw", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Menu", "Money Transfer with Iban", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Menu", "Take a Credit", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Menu", "Log Out", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Menu", "Transaction History", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Menu", "Account Information", nullptr));
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QCoreApplication::translate("Menu", "Balance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
