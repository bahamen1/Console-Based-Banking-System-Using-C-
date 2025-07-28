#ifndef ACCOUNTINFO_H
#define ACCOUNTINFO_H

#include <QDialog>
#include "changepass.h"

namespace Ui {
class Accountinfo;
}

class Accountinfo : public QDialog
{
    Q_OBJECT

public:
    explicit Accountinfo(QWidget *parent = nullptr, QString tc = "");
    ~Accountinfo();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Accountinfo *ui;
    QString m_tc;
    changepass *Changepass;

};

#endif // ACCOUNTINFO_H
