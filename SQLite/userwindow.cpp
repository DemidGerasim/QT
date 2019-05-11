#include "userwindow.h"
#include "ui_userwindow.h"
#include <QTableView>
#include <QMessageBox>
#include "mainwindow.h"

UserWindow::UserWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserWindow)
{
    ui->setupUi(this);

    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);

    ui->lineEdit->setPlaceholderText("Delete user by ID");
    ui->id->setPlaceholderText("ID");
    ui->username->setPlaceholderText("Username");
    ui->password->setPlaceholderText("Password");
    ui->email->setPlaceholderText("Email");
    ui->phone->setPlaceholderText("Phone");
}

UserWindow::~UserWindow()
{
    delete ui;
}

void UserWindow::ShowAllTable(){
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    query.prepare("SELECT * FROM users");

    if(query.exec())
    {
        QSqlQueryModel *M = new QSqlQueryModel();
        M->setQuery(query);
        ui->tableView->setModel(M);
    }
    else
    {
       QMessageBox::critical(this, "Error", query.lastError().text());
    }
}

void UserWindow::CliarTable(){
    QSqlQuery query(QSqlDatabase::database("MyConnect"));

        QSqlQueryModel *M = new QSqlQueryModel();
        M->clear();
        ui->tableView->setModel(M);

}

void UserWindow::on_pushButton_clicked()
{
    ShowAllTable();
}

void UserWindow::on_pushButton_2_clicked()
{
    CliarTable();
}

void UserWindow::on_pushButton_3_clicked()
{
    QSqlQuery query(QSqlDatabase::database("MyConnect"));

    QString id = ui->lineEdit->text();

         query.prepare("DELETE FROM users WHERE id='"+id+"'");

         if(query.exec())
         {
             QMessageBox::critical(this, "Delete", "Deleted");

             ShowAllTable();
         }
         else
         {
            QMessageBox::critical(this, "Error", query.lastError().text());
         }


}

void UserWindow::on_pushButton_4_clicked() // change
{
    QSqlQuery query(QSqlDatabase::database("MyConnect"));
    QString id = ui->id->text();
    QString username = ui->username->text();
    QString password = ui->password->text();
    QString email = ui->email->text();
    QString phone = ui->phone->text();

    QRegularExpression EMAIL("^[0-9a-zA-Z]+([0-9a-zA-Z][-._+])*[0-9a-zA-Z]+@[0-9a-zA-Z]+([-.][0-9a-zA-Z]+)*([0-9a-zA-Z]*[.])[a-zA-Z]{2,6}$");
    QRegularExpression NAME("^([A-Z]){1}+[a-z]*[a-z]$");
    QRegularExpression PHONE("^([\\+][7]){1}+([0-9]){1}+[0-9]{9}$");

     if((email.contains(EMAIL) && username.contains(NAME) &&  phone.contains(PHONE)) == true)
     {

         query.prepare("UPDATE users SET id='"+id+"',username='"+username+"',password='"+password+"',email='"+email+"',phone='"+phone+"' WHERE id='"+id+"'");



             if(query.exec())
             {
                 QMessageBox::critical(this, "Change", "Change successfuly!");

                 ShowAllTable();
             }
             else
             {
                QMessageBox::critical(this, "Error", query.lastError().text());
             }

     }
     else
     {
         QMessageBox::information(this, "Incorrect Data", "Enter correct data!");
     }
}




void UserWindow::on_pushButton_5_clicked() // add
{

        QString username = ui->username->text();
        QString password = ui->password->text();
        QString email = ui->email->text();
        QString phone = ui->phone->text();

        // проверка на правильность данных
        QRegularExpression EMAIL("^[0-9a-zA-Z]+([0-9a-zA-Z][-._+])*[0-9a-zA-Z]+@[0-9a-zA-Z]+([-.][0-9a-zA-Z]+)*([0-9a-zA-Z]*[.])[a-zA-Z]{2,6}$");
        QRegularExpression NAME("^([A-Z]){1}+[a-z]*[a-z]$");
        QRegularExpression PHONE("^([\\+][7]){1}+([0-9]){1}+[0-9]{9}$");


        QSqlQuery qry(QSqlDatabase::database("MyConnect"));

        qry.prepare("INSERT INTO users (username, password, email, phone)"
                    "VALUES (:username, :password, :email, :phone)");

        if((email.contains(EMAIL) && username.contains(NAME) &&  phone.contains(PHONE)) == true)
        {
            qry.bindValue(":username", username);
            qry.bindValue(":password", password);
            qry.bindValue(":email", email);
            qry.bindValue(":phone", phone);

            if(qry.exec()){
                QMessageBox::information(this, "Insert", "Data Iserted Successfully");

               ShowAllTable();
            }else {
                QMessageBox::information(this, "Not Insert", "Data Is Not Iserted");
            }

        }
        else
        {
            QMessageBox::information(this, "Incorrect Data", "Enter correct data!");
        }


}

void UserWindow::on_search_clicked() // search in a database
{
         QSqlQuery query(QSqlDatabase::database("MyConnect"));
         QString id = ui->id->text();

         if(id != ""){
             query.prepare( "SELECT * FROM users WHERE id=:id");
             query.bindValue(":id", id);

             QSqlQueryModel *M = new QSqlQueryModel();

             if(query.exec()){
                 QMessageBox::information(this, "Search", "Data Search Successfully");


                 M->setQuery(query);
                 ui->tableView->setModel(M);


             }else {
                 QMessageBox::information(this, "Not Search", "Data Is Not Search");
             }
         }else {
             QMessageBox::critical(this, "Not Search", "Enter ID!!!");
         }

}



void UserWindow::on_tableView_activated(const QModelIndex &index)
{
    QString val = ui->tableView->model()->data(index).toString();

    QSqlQuery qry(QSqlDatabase::database("MyConnect"));

    qry.prepare("SELECT * FROM users WHERE id='"+val+"' OR username='"+val+"' OR password='"+val+"' OR email='"+val+"' OR phone='"+val+"'");

    if(qry.exec())
    {
        while(qry.next())
        {
            ui->id->setText(qry.value(0).toString());
            ui->username->setText(qry.value(1).toString());
            ui->password->setText(qry.value(2).toString());
            ui->email->setText(qry.value(3).toString());
            ui->phone->setText(qry.value(4).toString());
        }
    }
    else
    {
        QMessageBox::critical(this, "Error", qry.lastError().text());
    }
}

void UserWindow::on_clear_clicked()
{
    ui->lineEdit->clear();
    ui->id->clear();
    ui->username->clear();
    ui->password->clear();
    ui->email->clear();
    ui->phone->clear();
}
