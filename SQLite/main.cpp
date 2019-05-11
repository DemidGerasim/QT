#include "mainwindow.h"
#include <QApplication>
#include <QtSql>
#include <QCoreApplication>
#include <QVariant>
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QTableView>


bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("registered");
//    db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("31.10.65.179");
//    db.setDatabaseName("test");
//    db.setPort(3306);
//    db.setUserName("root");
//    db.setPassword("vmvcIPvB0K9TeMvp");
//    db.setConnectOptions("MYSQL_OPT_RECONNECT=TRUE;");

    if(!db.open())
    {
        qDebug() << "open fail\n" << db.lastError().driverText() << "\n";

    }


}

int main(int argc, char **argv)
{
    QApplication a(argc, argv);

    MainWindow mw;
    createConnection();
    mw.show();

    return a.exec();
}
