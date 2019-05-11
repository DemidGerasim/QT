/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_UserWindow
{
public:
    QTableView *tableView;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QPushButton *pushButton_4;
    QLineEdit *id;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *email;
    QLineEdit *phone;
    QPushButton *pushButton_5;
    QPushButton *search;
    QPushButton *clear;

    void setupUi(QDialog *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName(QStringLiteral("UserWindow"));
        UserWindow->resize(1162, 693);
        UserWindow->setStyleSheet(QStringLiteral(""));
        tableView = new QTableView(UserWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 941, 691));
        tableView->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(175, 175, 175);"));
        pushButton = new QPushButton(UserWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(940, 0, 221, 71));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 98);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        pushButton_2 = new QPushButton(UserWindow);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(940, 400, 221, 71));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 98);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        pushButton_3 = new QPushButton(UserWindow);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(940, 70, 221, 71));
        pushButton_3->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 98);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        lineEdit = new QLineEdit(UserWindow);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(940, 140, 221, 24));
        lineEdit->setStyleSheet(QStringLiteral(""));
        pushButton_4 = new QPushButton(UserWindow);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(940, 160, 111, 71));
        pushButton_4->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 98);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        id = new QLineEdit(UserWindow);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(940, 230, 221, 24));
        id->setStyleSheet(QStringLiteral(""));
        username = new QLineEdit(UserWindow);
        username->setObjectName(QStringLiteral("username"));
        username->setGeometry(QRect(940, 250, 221, 24));
        username->setStyleSheet(QStringLiteral(""));
        password = new QLineEdit(UserWindow);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(940, 270, 221, 24));
        password->setStyleSheet(QStringLiteral(""));
        email = new QLineEdit(UserWindow);
        email->setObjectName(QStringLiteral("email"));
        email->setGeometry(QRect(940, 290, 221, 24));
        email->setStyleSheet(QStringLiteral(""));
        phone = new QLineEdit(UserWindow);
        phone->setObjectName(QStringLiteral("phone"));
        phone->setGeometry(QRect(940, 310, 221, 24));
        phone->setStyleSheet(QStringLiteral(""));
        pushButton_5 = new QPushButton(UserWindow);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(1050, 160, 111, 71));
        pushButton_5->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 98);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        search = new QPushButton(UserWindow);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(940, 330, 171, 71));
        search->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 98);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        clear = new QPushButton(UserWindow);
        clear->setObjectName(QStringLiteral("clear"));
        clear->setGeometry(QRect(1110, 330, 51, 71));
        clear->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 98);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        retranslateUi(UserWindow);

        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QDialog *UserWindow)
    {
        UserWindow->setWindowTitle(QApplication::translate("UserWindow", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("UserWindow", "Show data base", nullptr));
        pushButton_2->setText(QApplication::translate("UserWindow", "Hide data base", nullptr));
        pushButton_3->setText(QApplication::translate("UserWindow", "Delete", nullptr));
        pushButton_4->setText(QApplication::translate("UserWindow", "Change", nullptr));
        pushButton_5->setText(QApplication::translate("UserWindow", "Add", nullptr));
        search->setText(QApplication::translate("UserWindow", "Search", nullptr));
        clear->setText(QApplication::translate("UserWindow", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
