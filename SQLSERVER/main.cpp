#include <QApplication>
#include <QTextCodec>
#include "mainwindow.h"

#include <QtSql>
#include <QVariant>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("registered");


    if(!db.open())
    {
        qDebug() << "open fail\n" << db.lastError().driverText() << "\n";
        return false;
    }
    return true;
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

   if(!createConnection()) return 1;

    MainWindow w;
    w.show();

    return a.exec();
}
