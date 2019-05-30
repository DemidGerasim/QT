#ifndef CHANGEPROGRESS_H
#define CHANGEPROGRESS_H

#include <QDialog>


namespace Ui {
class ChangeProgress;
}

class ChangeProgress : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeProgress(QWidget *parent = nullptr);
    ~ChangeProgress();

private slots:
    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::ChangeProgress *ui;
};

#endif // CHANGEPROGRESS_H
