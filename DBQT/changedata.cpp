#include "changedata.h"
#include "ui_changedata.h"
#include "database.h"
#include <QMessageBox>
#include <QRegularExpression>


ChangeData::ChangeData(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChangeData)
{
    ui->setupUi(this);

    this->setWindowFlags(Qt::FramelessWindowHint);
}

ChangeData::~ChangeData()
{
    delete ui;
}

void ChangeData::on_pushButton_7_clicked()
{
    QString ID = ui->id->text(); // считывает данные о id
    int id = ID.toInt();

    if(ID != "")
    {
        // считывает введённые данные
        QString tel = ui->phone->text();
        string Tel = tel.toStdString();


        // приравнивает введённые данные к данным структуры
        Data ch;
        ch.tel = Tel;


        DataBase obj("Reg");

        // проверка что изменять
        QRegularExpression PHONE("^([\\+][7]){1}+([0-9]){1}+[0-9]{9}$");


        if(tel.contains(PHONE) == false){
            QMessageBox::warning(this, "Ошибка", "Заполните все поля и исправте ошибки!!!");
        }
        else if(tel.contains(PHONE) == true )
        {
            ui->phone->clear();
            obj.changeTel(id, ch);
        }


    }
    else
    {
        QMessageBox::critical(this, "Error", "Заполните поле с ID!");
    }
}

void ChangeData::on_pushButton_8_clicked()
{
    close();
}

void ChangeData::on_name_2_clicked()
{
    QString ID = ui->id->text(); // считывает данные о id
    int id = ID.toInt();
    if(ID != "")
    {
        QString name = ui->name->text();
        string Name = name.toStdString();
        Data ch;
        ch.name = Name;
        DataBase obj("Reg");
         QRegularExpression NAME("^([A-Z]){1}+[a-z]*[a-z]$");
        if(name.contains(NAME)== false){
            QMessageBox::warning(this, "Ошибка", "Заполните все поля и исправте ошибки!!!");
        }
        else if(name.contains(NAME) == true )
        {
            ui->name->clear();
          obj.changeName(id, ch);
        }
    }
    else
    {
        QMessageBox::critical(this, "Error", "Заполните поле с ID!");
    }
}

void ChangeData::on_surname_2_clicked()
{
    QString ID = ui->id->text(); // считывает данные о id
    int id = ID.toInt();

    QString surname = ui->surname->text();
    string Surname = surname.toStdString();
    if(ID != "")
    {
    Data ch;
    ch.surname = Surname;
    QRegularExpression NAME("^([A-Z]){1}+[a-z]*[a-z]$");

           if(surname.contains(NAME) == false){
               QMessageBox::warning(this, "Ошибка", "Заполните все поля и исправте ошибки!!!");
           }
           else if(surname.contains(NAME) == true )
           {
             DataBase obj("Reg");
            ui->surname->clear();

            obj.changeSurname(id, ch);
           }
    }
    else
    {
        QMessageBox::critical(this, "Error", "Заполните поле с ID!");
    }
}

void ChangeData::on_pushButton_12_clicked()
{
    QString ID = ui->id->text(); // считывает данные о id
    int id = ID.toInt();

    if(ID != "")
    {
        QString otch = ui->otch->text();
        string Otch = otch.toStdString();

        Data ch;
         ch.otch = Otch;
         QRegularExpression NAME("^([A-Z]){1}+[a-z]*[a-z]$");

         if(otch.contains(NAME) == false){
             QMessageBox::warning(this, "Ошибка", "Заполните все поля и исправте ошибки!!!");
         }
         else if(otch.contains(NAME) == true )
         {
          DataBase obj("Reg");
            obj.changeOtch(id, ch);
            ui->otch->clear();
         }
    }
    else
    {
        QMessageBox::critical(this, "Error", "Заполните поле с ID!");
    }
}

void ChangeData::on_login_2_clicked()
{
    QString ID = ui->id->text(); // считывает данные о id
    int id = ID.toInt();
    if(ID != "")
    {
        QString login = ui->login->text();
        string Login = login.toStdString();

         Data ch;
        ch.login = Login;

        if(login != ""){
            QMessageBox::warning(this, "Ошибка", "Заполните все поля и исправте ошибки!!!");
        }
        else if(login != "")
        {
            ui->login->clear();
            DataBase obj("Reg");

           obj.changeLogin(id, ch);
        }
    }
    else
    {
        QMessageBox::critical(this, "Error", "Заполните поле с ID!");
    }
}

void ChangeData::on_password_2_clicked()
{
    QString ID = ui->id->text(); // считывает данные о id
    int id = ID.toInt();

    if(ID != "")
    {
        QString password = ui->password->text();
        string Pass = password.toStdString();

         Data ch;
         ch.password = Pass;

         if(password != ""){
             QMessageBox::warning(this, "Ошибка", "Заполните все поля и исправте ошибки!!!");
         }
         else if(password != "")
         {
                ui->password->clear();
                DataBase obj("Reg");

              obj.changePass(id, ch);
         }

    }
    else
    {
        QMessageBox::critical(this, "Error", "Заполните поле с ID!");
    }
}
