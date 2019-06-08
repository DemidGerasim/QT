#include "adminwindow.h"
#include "ui_adminwindow.h"
#include "database.h"
#include <QMessageBox>
#include "checkin.h"
#include "add.h"
#include "changedata.h"
#include "changeprogress.h"
#include "addbook.h"

AdminWindow::AdminWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("D:/Study/ProgrammingLanguages/QT_181_352_Gerasimenko/GUI/DBQT/imag/fon.jpg");
            bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
            QPalette palette;
            palette.setBrush(QPalette::Background, bkgnd);
            this->setPalette(palette);
}

AdminWindow::~AdminWindow()
{
    delete ui;
}


void AdminWindow::on_AddUser_clicked() // показывает окно добавления
{
    CheckIn wind;
    wind.setModal(true);
    wind.exec();
    show();
}

void AdminWindow::on_Add_clicked() // показывает окно добавления
{
    Add wind;
    wind.setModal(true);
    wind.exec();
    show();
}

void AdminWindow::on_SearchUsers_clicked() // поиск запрошенной информации
{

    QString info = ui->lineEdit_20->text(); // введённая инфа
    string Info = info.toStdString();

    DataBase test("Reg"); // где будет производиться поиск

    QString str;
    // преобразование найденной информации в строку
    str = QString::fromStdString(test.searchText("tel", Info));
    str = QString::fromStdString(test.searchText("name", Info));
    str = QString::fromStdString(test.searchText("surname", Info));
    str = QString::fromStdString(test.searchText("otch", Info));

    ui->textEdit_7->setText(str);

}

void AdminWindow::on_TableProgress_clicked()
{
    QString info = ui->ProgLine->text();// введённая инфа


    string Info = info.toStdString();

    Progress test("Progress"); // где будет производиться поиск

    QString str;// преобразование найденной информации в строку
    str = QString::fromStdString(test.searchProgressText("name", Info));
    str = QString::fromStdString(test.searchProgressText("surname", Info));
    str = QString::fromStdString(test.searchProgressText("otch", Info));

    ui->ProgInfo->setText(str);
}

void AdminWindow::on_Delete_clicked() // удаление по id
{
    QString ID = ui->lineEdit_21->text();
    int id = ID.toInt();
    DataBase delID("Reg");
    delID.del(id);
}

void AdminWindow::on_DeleteProg_clicked()// удаление по id
{
    QString ID = ui->LineProgDelete->text();
    int id = ID.toInt();
    DataBase delID("Progress");
    delID.del(id);
}

void AdminWindow::on_Change_clicked() // показывает окно со сменой данных
{
    ChangeData wind;
    wind.setModal(true);
    wind.exec();
    show();
}

void AdminWindow::on_Change_2_clicked() // показывает окно со сменой данных
{
    ChangeProgress wind;
    wind.setModal(true);
    wind.exec();
    show();
}

void AdminWindow::on_Change_3_clicked()
{
    addBook wind;
    wind.setModal(true);
    wind.exec();
    show();
}
