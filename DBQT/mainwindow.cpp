#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "database.h"
#include "checkin.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("D:/Study/ProgrammingLanguages/QT_181_352_Gerasimenko/GUI/DBQT/imag/fon.jpg");
            bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
            QPalette palette;
            palette.setBrush(QPalette::Background, bkgnd);
            this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Data temp;
    QString login = ui->lineEdit->text(); // считывает логин
    string Log = login.toStdString();
    QString password = ui->lineEdit_2->text(); // считывает пароль
    string Pass = password.toStdString();
    DataBase check("Reg"); // откуда считываются данные

    temp.login = Log;
    temp.password = Pass;

    // проверка какое окно открывать ( в зависимости от статуса )
   if(check.checkLogAndPassAdmin(Log, Pass) == true)
   {
        hide();
        AdminWindow wind;
        wind.setModal(true);
        wind.exec();
        show();
   }
   else if(check.checkLogAndPassUser(Log, Pass) == true)
   {
       hide();
       UserWindow wind;
       wind.setModal(true);
       wind.exec();
       show();
   }

}

void MainWindow::on_pushButton_2_clicked()
{
    CheckIn wind; // окно регистрации
    wind.setModal(true);
    wind.exec();
    show();
}
