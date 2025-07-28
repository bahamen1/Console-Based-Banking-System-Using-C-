#ifndef CHANGEPASS_H
#define CHANGEPASS_H

#include <QDialog>

namespace Ui {
class changepass;
}

class changepass : public QDialog
{
    Q_OBJECT

public:
    explicit changepass(QWidget *parent = nullptr, QString tc = "");
    ~changepass();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::changepass *ui;
    QString m_tc;
};

#endif // CHANGEPASS_H
