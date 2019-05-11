#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "userwindow.h"

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

#include <QCoreApplication>
#include <QRegularExpression>
#include <QVariant>
#include <QDebug>
#include <QTableView>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->groupBox_2->hide();

    ui->lineEdit->setPlaceholderText("Login");
    ui->lineEdit_2->setPlaceholderText("Password");
    ui->lineEdit_7->setPlaceholderText("Ivan");
    ui->lineEdit_8->setPlaceholderText("********");
    ui->lineEdit_9->setPlaceholderText("ivanov@gmail.com");
    ui->lineEdit_11->setPlaceholderText("+7(977)500-43-23");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->groupBox_2->show();
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->groupBox_2->hide();
}

void MainWindow::on_pushButton_clicked() // login
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();


    QMessageBox::information(this, "DataBase Success", "Connection success");
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare(QString("SELECT * FROM users WHERE username = :username AND password = :password"));
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if(!query.exec()){
        QMessageBox::information(this, "Failad", "Query failed to Execute");
    }else {
        while(query.next()){
            QString usernameFromDB = query.value(1).toString();
            QString passwordFromDB = query.value(2).toString();

            if(usernameFromDB == username && passwordFromDB == password){
                QMessageBox::information(this, "Success", "Login success");

                UserWindow wind;
                wind.setModal(true);
                wind.exec();


            }else {
                QMessageBox::information(this, "Error", "Login Error");
            }

        }
    }

}

void MainWindow::on_pushButton_7_clicked() // add data users (registration)
{

    QString Username = ui->lineEdit_7->text();
    QString Password = ui->lineEdit_8->text();
    QString Email = ui->lineEdit_9->text();
    QString Phone = ui->lineEdit_11->text();

    // проверка на правильность данных
    QRegularExpression EMAIL("^[0-9a-zA-Z]+([0-9a-zA-Z][-._+])*[0-9a-zA-Z]+@[0-9a-zA-Z]+([-.][0-9a-zA-Z]+)*([0-9a-zA-Z]*[.])[a-zA-Z]{2,6}$");
    QRegularExpression NAME("^([A-Z]){1}+[a-z]*[a-z]$");
    QRegularExpression PHONE("^([\\+][7]){1}+([0-9]){1}+[0-9]{9}$");


    QSqlQuery qry(QSqlDatabase::database("MyConnect"));

    qry.prepare("INSERT INTO users (username, password, email, phone)"
                "VALUES (:username, :password, :email, :phone)");

    if((Email.contains(EMAIL) && Username.contains(NAME) &&  Phone.contains(PHONE)) == true)
    {
        qry.bindValue(":username", Username);
        qry.bindValue(":password", Password);
        qry.bindValue(":email", Email);
        qry.bindValue(":phone", Phone);

        if(qry.exec()){
            QMessageBox::information(this, "Insert", "Data Iserted Successfully");
        }else {
            QMessageBox::information(this, "Not Insert", "Data Is Not Iserted");
        }

    }
    else
    {
        QMessageBox::information(this, "Incorrect Data", "Enter correct data!");
    }

}
