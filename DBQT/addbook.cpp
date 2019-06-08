#include "addbook.h"
#include "ui_addbook.h"
#include <QMessageBox>
#include "database.h"
#include <QRegularExpression>

addBook::addBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addBook)
{
    ui->setupUi(this);
    this->setWindowFlags(Qt::FramelessWindowHint); // убирает дефолтные грани окна
}

addBook::~addBook()
{
    delete ui;
}



void addBook::on_pushButton_7_clicked()
{
    // считываем введённых данных
    QString name = ui->lineEdit_7->text();
    QString surname = ui->lineEdit_8->text();
    QString year = ui->lineEdit_11->text();
    QString otch = ui->lineEdit_9->text();
    QString book = ui->lineEdit_13->text();

    QString col = ui->lineEdit_12->text();
    QString status = ui->lineEdit_14->text();

    QRegularExpression NAME("^([A-Z]){1}+[a-z]*[a-z]$");
    QRegularExpression PHONE("^([\\+][7]){1}+([0-9]){1}+[0-9]{9}$");
      QRegularExpression YEAR("^([1-9]){2}+[1-9]{1}+[1-9]{1}$");

    if(year.contains(YEAR) == false || name.contains(NAME) == false || surname.contains(NAME) == false || otch.contains(NAME) == false || book == "" || col == "")
    {
        QMessageBox::warning(this, "Ошибка", "Заполните все поля и исправте ошибки!!!");
    }
    else if(year.contains(YEAR) == true && name.contains(NAME) == true && surname.contains(NAME) == true && otch.contains(NAME) == true && book != "" && col != "")
    {

        // cчитанные данные преобразуем в string
        string Status = status.toStdString();
        string Year = year.toStdString();
        string Name = name.toStdString();
        string Surname = surname.toStdString();
        string Otch = otch.toStdString();
        string Book = book.toStdString();
        string Col = col.toStdString();

        ui->lineEdit_7->clear();
        ui->lineEdit_8->clear();
        ui->lineEdit_9->clear();
        ui->lineEdit_11->clear();
        ui->lineEdit_13->clear();
        ui->lineEdit_12->clear();
        ui->lineEdit_14->clear();

        // сравнение с структурой
        Prog x;
        x.name = Name;
        x.surname = Surname;
        x.otch = Otch;
        x.kt1 = Year;
        x.kt2 = Book;
        x.kt3 = Col;
        x.kt4 = Status;


        Progress obj("Progress"); // куда записываем
        obj.read();
        obj.add(x); // добавляем
        obj.write();// записываем

    }
}

void addBook::on_pushButton_8_clicked()
{
    close();
}
