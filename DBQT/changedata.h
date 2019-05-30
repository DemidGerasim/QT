#ifndef CHANGEDATA_H
#define CHANGEDATA_H

#include <QDialog>

namespace Ui {
class ChangeData;
}

class ChangeData : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeData(QWidget *parent = nullptr);
    ~ChangeData();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_name_2_clicked();

    void on_surname_2_clicked();

    void on_pushButton_12_clicked();

    void on_login_2_clicked();

    void on_password_2_clicked();

private:
    Ui::ChangeData *ui;
};

#endif // CHANGEDATA_H
