#include "checkin.h"
#include "ui_checkin.h"
#include "database.h"
#include <QMessageBox>
#include <QRegularExpression>

CheckIn::CheckIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CheckIn)
{
    ui->setupUi(this);

     this->setWindowFlags(Qt::FramelessWindowHint);
}

CheckIn::~CheckIn()
{
    delete ui;
}

void CheckIn::on_pushButton_8_clicked()
{
    close();
}

void CheckIn::on_pushButton_7_clicked() // добаляем пользователя
{
    // считываем введённых данных
        QString tel = ui->lineEdit_7->text();
        QString name = ui->lineEdit_8->text();
        QString surname = ui->lineEdit_9->text();
        QString otch = ui->lineEdit_11->text();
        QString login = ui->lineEdit_13->text();
        QString password = ui->lineEdit_12->text();
        QString status = "user";

        QRegularExpression NAME("^([A-Z]){1}+[a-z]*[a-z]$");
        QRegularExpression PHONE("^([\\+][7]){1}+([0-9]){1}+[0-9]{9}$");


        if(tel.contains(PHONE) == false || name.contains(NAME) == false || surname.contains(NAME) == false || otch.contains(NAME) == false || login == "" || password == "")
        {
            QMessageBox::warning(this, "Ошибка", "Заполните все поля и исправте ошибки!!!");
        }
        else if(tel.contains(PHONE) == true && name.contains(NAME) == true && surname.contains(NAME) == true && otch.contains(NAME) == true && login != "" && password != "")
        {
                   // cчитанные данные преобразуем в string
            string Status = status.toStdString();
            string Tel = tel.toStdString();
            string Name = name.toStdString();
            string Surname = surname.toStdString();
            string Otch = otch.toStdString();
            string Login = login.toStdString();
            string Password = password.toStdString();

            ui->lineEdit_7->clear();
            ui->lineEdit_8->clear();
            ui->lineEdit_9->clear();
            ui->lineEdit_11->clear();
            ui->lineEdit_13->clear();
            ui->lineEdit_12->clear();

                 // сравнение с структурой
            Data x;
            x.tel = Tel;
            x.name = Name;
            x.surname = Surname;
            x.otch = Otch;
            x.login = Login;
            x.password = Password;
            x.status = Status;


            DataBase obj("Reg"); // куда записываем
            obj.read();
            obj.add(x);// добавляем
            obj.write();// записываем

        }
}
