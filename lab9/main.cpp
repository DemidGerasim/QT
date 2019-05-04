#include "widget.h"
#include <QApplication>
#include <QSqlQueryModel>
#include <QDebug>
#include <QTableView>
#include <QSqlRecord>
#include <QCoreApplication>
#include <QtSql>
#include <QSqlQuery>
#include <QSqlRecord>

static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("D:\\Study\\ProgrammingLanguages\\QT_181_352_Gerasimenko\\GUI\\lab9\\addressbook");
    //db.setUserName("elton");
    //db.setHostName("epica");
    //db.setPassword("password");
    if (!db.open())
    {
        qDebug() << "Cannot open database:" << db.lastError().text();
        return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    if (!createConnection())
    {
        return -1;
    }

    QTableView view;
    //QSqlQueryModel model;

    //model.setQuery("SELECT phone, email FROM addressbook WHERE name = 'Piggy';");
    //if (model.lastError().isValid())
    //{
    //    qDebug() << model.lastError();
    //}

    QSqlTableModel model;
    model.setTable("addressbook");
    model.select();
    model.setEditStrategy(QSqlTableModel::OnFieldChange);

    view.setModel(&model);
    view.show();
    return app.exec();
}

