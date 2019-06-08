#include "changeprogress.h"
#include "ui_changeprogress.h"
#include "database.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QDebug>

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

         QRegularExpression year("^([1-9]){2}+[1-9]{1}+[1-9]{1}$");
         qDebug() << kt1.contains(year);
        Progress obj("Progress");


            if(kt1 != ""){
                 if(kt1.contains(year) == true){
                    obj.changeKT1(id, ch);
                    ui->kt1->clear();
                 }else {
                        QMessageBox::information(this, "Error", "Enter correct year");
                 }
            }
            else {
                QMessageBox::information(this, "Error", "Enter year");
            }

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
     if(kt2 != "")
     {
         obj.changeKT2(id, ch);
         ui->kt2->clear();
     }
     else
     {
         QMessageBox::information(this, "Error", "Enter book");
     }
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


        if(kt3 != "")
        {
            ui->kt3->clear();
             obj.changeKT3(id, ch);
        }
        else
        {
            QMessageBox::information(this, "Error", "Enter quantity");
        }

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
        if(kt4 != "")
        {
            ui->kt4->clear();
              test.changeKT4(id, ch);
        }
        else
        {
            QMessageBox::information(this, "Error", "Enter state");
        }
}
