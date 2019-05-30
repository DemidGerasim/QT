#include "checkin.h"
#include "ui_checkin.h"
#include "database.h"
#include <QMessageBox>

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

        if(tel == "" || name == "" || surname == "" || otch == "" || login == "" || password == "")
        {
            QMessageBox::warning(this, "Ошибка", "Заполните все поля!!!");
        }
        else
        {
              // cчитанные данные преобразуем в string
            string Status = status.toStdString();
            string Tel = tel.toStdString();
            string Name = name.toStdString();
            string Surname = surname.toStdString();
            string Otch = otch.toStdString();
            string Login = login.toStdString();
            string Password = password.toStdString();

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
