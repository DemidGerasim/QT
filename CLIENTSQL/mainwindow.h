#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "clientStuff.h"
#include <QStandardItemModel>
#include <QTabWidget>
#include <QTableView>

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <string>
#include <vector>

#include <string.h>
#include <stdio.h> // Компилятор MinGW, не MSVC. Первый роднее Qt, второй - Visual Studio.

#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QFileDialog>
#include <QJsonParseError>
#include <QStandardItem>
#include <QJsonArray>

using namespace std;



namespace Ui { class MainWindow; }

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void sendStatus(QString status);
    void sendRequest(QString status);
    void adminPanel();
    void closeAdminPanel();

    void userPanel();
    void closeUserPanel();

    void connectToServer();
    void disconnect();

    int do_crypt(FILE *in, FILE *out, int do_encrypt);


    QJsonDocument doc;
    QJsonParseError docError;
    QString globPath;
    QJsonArray docArr;
    
public slots:
    void receivedSomething(QString msg);
    void gotError(QAbstractSocket::SocketError err);


private slots:
    void on_SignIN_clicked();
    void on_pushButton_5_clicked();
    void on_delete_2_clicked();
    void on_ShowDataBase_clicked();
    void on_Change_clicked();
    void on_Search_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:

    QStandardItemModel *csvModel;

    QString STATUS_SHOW_TABLE, STATUS_SEARCH_TABLE;

    Ui::MainWindow *ui;
    ClientStuff *client;
};

#endif // MAINWINDOW_H
