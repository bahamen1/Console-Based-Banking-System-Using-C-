#ifndef TAKELOAN_H
#define TAKELOAN_H

#include <QDialog>

namespace Ui {
class Takeloan;
}

class Takeloan : public QDialog
{
    Q_OBJECT

public:
    explicit Takeloan(QWidget *parent = nullptr, QString tc = "");
    ~Takeloan();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::Takeloan *ui;
    QString m_tc;

};

#endif // TAKELOAN_H
