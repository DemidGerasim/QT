#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <iostream>
#include <string>
#include <fstream>
#include <QFile>
#include <QFileDialog>
#include <QJsonDocument>
#include <QStandardItem>
#include <QJsonParseError>
#include <QJsonObject>
#include <QList>

using namespace std;

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   closeAdminPanel();
    closeUserPanel();


    client = new ClientStuff("localhost", 6547);


    connect(client, &ClientStuff::hasReadSome, this, &MainWindow::receivedSomething);
    // FIXME change this connection to the new syntax
    connect(client->tcpSocket, SIGNAL(error(QAbstractSocket::SocketError)),
            this, SLOT(gotError(QAbstractSocket::SocketError)));



}

MainWindow::~MainWindow()
{
    delete client;
    delete ui;
}

void MainWindow::receivedSomething(QString msg)
{
    if(msg == "LOG_IN_ADMIN")
    {
        adminPanel();
    }

    if(msg == "CHANGE")
    {
        QMessageBox::information(this, "Success", "Data Chenge Successfully");
    }

    if(msg == "LOG_IN_USER")
    {
        QMessageBox::information(this, "Success", "You user!!!");
    }

    if(msg == "STATUS_ADD")
    {
        QMessageBox::information(this, "Insert", "Data Iserted Successfully");
    }

    if(msg == "STATUS_DELETE")
    {
        QMessageBox::information(this, "Delete", "Data Delete Successfully");
    }

    if(STATUS_SHOW_TABLE != "SHOW_TABLE")
    {
        STATUS_SHOW_TABLE = msg;
    }

        if(STATUS_SHOW_TABLE == "SHOW_TABLE" && msg != "SHOW_TABLE"){
            STATUS_SHOW_TABLE = "";
             ui->textEdit->clear();
            ui->textEdit->append(msg);

        }


        if(STATUS_SEARCH_TABLE != "SEARCH"){
            STATUS_SEARCH_TABLE = msg;
        }

            if(STATUS_SEARCH_TABLE == "SEARCH" && msg != "SEARCH"){
                STATUS_SEARCH_TABLE = "";

                 ui->textEdit->clear();
                ui->textEdit->append(msg);


            }
}

void MainWindow::adminPanel(){
    ui->groupBox_2->show();
}

void MainWindow::closeAdminPanel(){
     ui->groupBox_2->hide();
}

void MainWindow::gotError(QAbstractSocket::SocketError err)
{
    //qDebug() << "got error";
    closeAdminPanel();
    QString strError = "unknown";
    switch (err)
    {
        case 0:
            strError = "Connection was refused";
            break;
        case 1:
            strError = "Remote host closed the connection";
            break;
        case 2:
            strError = "Host address was not found";
            break;
        case 5:
            strError = "Connection timed out";
            break;
        default:
            strError = "Unknown error";
    }


}

void MainWindow::connectToServer(){
     client->connect2host();
}



void MainWindow::disconnect(){
    client->closeConnection();
}

void MainWindow::sendStatus(QString msg){


    //  Готовим посылку
    QByteArray arrBlock;
    QDataStream out(&arrBlock, QIODevice::WriteOnly);

    out << quint16(0) << msg;

    out.device()->seek(0);
    out << quint16(arrBlock.size() - sizeof(quint16));

    qDebug() << msg;

    client->tcpSocket->write(arrBlock);
}



void MainWindow::sendRequest(QString msg){
    //  Готовим посылку
    QByteArray arrBlock;
    QDataStream out(&arrBlock, QIODevice::WriteOnly);

    out << quint16(0) << msg;

    out.device()->seek(0);
    out << quint16(arrBlock.size() - sizeof(quint16));

    qDebug() << msg;

    client->tcpSocket->write(arrBlock);
}


void MainWindow::on_SignIN_clicked()
{
    connectToServer();

//    string statusStr;
    QString test = "LOG_IN";
    string str = "LOG_IN";


    sendStatus(test); //отправка

    QString login = ui->log->text();
    QString password = ui->pas->text();
    QString STATUS = "";

     if(ui->checkBox->isChecked()){
         STATUS = "user";
     } else {
         STATUS = "admin";
     }

    QString request = "SELECT * FROM users WHERE username = '"+login+"' AND password = '"+password+"' AND status = '"+STATUS+"'";
    sendRequest(request);
}

void MainWindow::on_pushButton_5_clicked() // add
{
    QString status = "STATUS_ADD";
    sendStatus(status);

    QString username = ui->username->text();
     QString password = ui->password->text();
     QString email = ui->email->text();
    QString phone = ui->phone->text();
    QString who = "";

    if(ui->checkBox_2->isChecked()){
        who = "admin";
    } else if(ui->checkBox_3->isChecked()){
        who = "user";
    }


        QString request = "INSERT INTO users (username, password, email, phone, status) VALUES ('"+username+"', '"+password+"', '"+email+"', '"+phone+"', '"+who+"')";
        sendRequest(request);

        ui->id->clear();
        ui->username->clear();
        ui->password->clear();
        ui->email->clear();
        ui->phone->clear();


}

void MainWindow::on_delete_2_clicked() // delete
{
    QString status = "STATUS_DELETE";
    sendStatus(status);

    QString id = ui->id->text();

    if(id != ""){
        QString request = "DELETE FROM users WHERE id='"+id+"'";
        sendRequest(request);

    } else {
         QMessageBox::information(this, "Не коректные данные", "Вы не ввели id!!!");
    }

    ui->id->clear();
}

void MainWindow::on_ShowDataBase_clicked()
{
    QString status = "SHOW_TABLE";
    sendStatus(status);

    QString request = "SELECT * FROM users";
    sendRequest(request);
}


void MainWindow::userPanel()
{
    ui->lineEdit->show();
    ui->pushButton_2->show();
}

void MainWindow::closeUserPanel()
{
    ui->lineEdit->close();
    ui->pushButton_2->close();
}


void MainWindow::on_Change_clicked()
{
    QString status = "CHANGE";
    sendStatus(status);

    QString id = ui->id->text();
    QString username = ui->username->text();
     QString password = ui->password->text();
     QString email = ui->email->text();
    QString phone = ui->phone->text();

    QString who = "";

    if(ui->checkBox_2->isChecked()){
        who = "admin";
    } else if(ui->checkBox_3->isChecked()){
        who = "user";
    }



            if(username != "" && password != "" && email != "" && phone != ""){
                QString request = "UPDATE users SET id='"+id+"',username='"+username+"',password='"+password+"',email='"+email+"',phone='"+phone+"',status='"+who+"' WHERE id='"+id+"'";
                sendRequest(request);
            }




}

void MainWindow::on_Search_clicked()
{
    QString status = "SEARCH";
    sendStatus(status);


    QString id = ui->id->text();

    if(id != "")
    {
        QString request = "SELECT * FROM users WHERE id='"+id+"'";
        sendRequest(request);
    }
    else
    {
        QMessageBox::critical(this, "Not Search", "Enter ID!!!");
    }

    ui->id->clear();
}

void MainWindow::on_pushButton_3_clicked()
{
     ui->textEdit->clear();
}

void MainWindow::on_pushButton_clicked()
{
    closeAdminPanel();
    disconnect();
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->lineEdit->hide();
    ui->pushButton_2->hide();
}
