#include "userwindow.h"
#include "ui_userwindow.h"

#include "database.h"
#include <QMessageBox>

UserWindow::UserWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserWindow)
{
    ui->setupUi(this);
    QPixmap bkgnd("D:/Study/ProgrammingLanguages/QT_181_352_Gerasimenko/GUI/DBQT/imag/fon.jpg");
            bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
            QPalette palette;
            palette.setBrush(QPalette::Background, bkgnd);
            this->setPalette(palette);
}

UserWindow::~UserWindow()
{
    delete ui;
}




void UserWindow::on_TableProgress_clicked()
{
    QString info = ui->ProgLine->text(); // введённые данные


    string Info = info.toStdString();

    Progress test("Progress");// где осуществлять поиск

    QString str; // поиск по следующим параметрам
    str = QString::fromStdString(test.searchProgressText("name", Info)); // имя
    str = QString::fromStdString(test.searchProgressText("surname", Info));// фамилия
    str = QString::fromStdString(test.searchProgressText("otch", Info));// отчество


    ui->ProgInfo->setText(str); // вывод найденных данных
}
