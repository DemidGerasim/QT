#ifndef ADMINWINDOW_H
#define ADMINWINDOW_H

#include <QDialog>
#include "userwindow.h"
#include <string>

namespace Ui {
class AdminWindow;
}

class AdminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AdminWindow(QWidget *parent = nullptr);
    ~AdminWindow();
   void search();

private slots:

   void on_AddUser_clicked();

   void on_Add_clicked();

   void on_SearchUsers_clicked();

   void on_TableProgress_clicked();

   void on_Delete_clicked();

   void on_DeleteProg_clicked();

   void on_Change_clicked();

   void on_Change_2_clicked();

private:
    Ui::AdminWindow *ui;


};

#endif // ADMINWINDOW_H
