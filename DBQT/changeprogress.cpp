#include "changeprogress.h"
#include "ui_changeprogress.h"
#include "database.h"
#include <QMessageBox>

ChangeProgress::ChangeProgress(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeProgress)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint);
}

ChangeProgress::~ChangeProgress()
{
    delete ui;
}

void ChangeProgress::on_pushButton_7_clicked()
{
    QString ID = ui->id->text();
    int id = ID.toInt();


        QString kt1 = ui->kt1->text();
        string KT1 = kt1.toStdString();


        Prog ch;
        ch.kt1 = KT1;


        Progress obj("Progress");


        obj.changeKT1(id, ch);

}

void ChangeProgress::on_pushButton_8_clicked()
{
    close();
}

void ChangeProgress::on_pushButton_9_clicked()
{
    QString ID = ui->id->text();
    int id = ID.toInt();

    QString kt2 = ui->kt2->text();
    string KT2 = kt2.toStdString();

     Prog ch;
     ch.kt2 = KT2;

     Progress obj("Progress");

     obj.changeKT2(id, ch);
}

void ChangeProgress::on_pushButton_11_clicked()
{
    QString ID = ui->id->text();
    int id = ID.toInt();


        QString kt3 = ui->kt3->text();
        string KT3 = kt3.toStdString();



        Prog ch;
        ch.kt3 = KT3;

        Progress obj("Progress");
        obj.changeKT3(id, ch);
}

void ChangeProgress::on_pushButton_10_clicked()
{
    QString ID = ui->id->text();
    int id = ID.toInt();

        QString kt4 = ui->kt4->text();
        string KT4 = kt4.toStdString();

        Prog ch;

        ch.kt4 = KT4;


        Progress test("Progress");

        test.changeKT4(id, ch);
}
