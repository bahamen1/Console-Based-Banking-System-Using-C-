QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accountinfo.cpp \
    changepass.cpp \
    deposit.cpp \
    forgotpassword.cpp \
    login.cpp \
    main.cpp \
    menu.cpp \
    moneyTransfer.cpp \
    register.cpp \
    takeloan.cpp \
    transaction.cpp \
    withdraw.cpp

HEADERS += \
    accountinfo.h \
    changepass.h \
    deposit.h \
    forgotpassword.h \
    login.h \
    menu.h \
    moneyTransfer.h \
    register.h \
    takeloan.h \
    transaction.h \
    withdraw.h

FORMS += \
    accountinfo.ui \
    changepass.ui \
    deposit.ui \
    forgotpassword.ui \
    login.ui \
    menu.ui \
    moneyTransfer.ui \
    register.ui \
    takeloan.ui \
    transaction.ui \
    withdraw.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc

DISTFILES +=

