#include "add.h"
#include "ui_Add.h"
#include <QMessageBox>
#include "database.h"


Add::Add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Add)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint); // убирает дефолтные грани окна
}

Add::~Add()
{
    delete ui;
}

void Add::on_pushButton_7_clicked() // добавление пользователя
{

    // считываем введённых данных
    QString tel = ui->lineEdit_7->text();
    QString name = ui->lineEdit_8->text();
    QString surname = ui->lineEdit_9->text();
    QString otch = ui->lineEdit_11->text();
    QString login = ui->lineEdit_13->text();
    QString password = ui->lineEdit_12->text();
    QString status = "admin";

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
        obj.add(x); // добавляем
        obj.write();// записываем

    }
}

void Add::on_pushButton_8_clicked()
{
    close();
}
