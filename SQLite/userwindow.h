#ifndef USERWINDOW_H
#define USERWINDOW_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

namespace Ui {
class UserWindow;
}

class UserWindow : public QDialog
{
    Q_OBJECT

public:
    explicit UserWindow(QWidget *parent = nullptr);
    ~UserWindow();
     void ShowAllTable();
     void CliarTable();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_search_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_clear_clicked();

private:
    Ui::UserWindow *ui;
    QSqlTableModel *model;
    QSqlDatabase db;
};

#endif // USERWINDOW_H
