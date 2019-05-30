#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <adminwindow.h>
#include <userwindow.h>

#include <QDebug>
#include <QMainWindow>
#include "QString"
#include "QDebug"
#include "QDir"
#include <QFile>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QUrlQuery>
#include <QUrl>
#include <QByteArray>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString value();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    AdminWindow *adminWindow;
    UserWindow *userWindow;
};

#endif // MAINWINDOW_H
