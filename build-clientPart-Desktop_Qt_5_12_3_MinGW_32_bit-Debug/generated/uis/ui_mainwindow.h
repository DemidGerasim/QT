/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *log;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *pas;
    QCheckBox *checkBox;
    QPushButton *SignIN;
    QGroupBox *groupBox_2;
    QPushButton *Change;
    QPushButton *ShowDataBase;
    QPushButton *pushButton_5;
    QPushButton *delete_2;
    QPushButton *pushButton_3;
    QPushButton *Search;
    QPushButton *pushButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *id;
    QLineEdit *username;
    QLineEdit *password;
    QLineEdit *email;
    QLineEdit *phone;
    QTextEdit *textEdit;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1029, 780);
        MainWindow->setMinimumSize(QSize(1029, 780));
        MainWindow->setMaximumSize(QSize(1029, 780));
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(52, 52, 52);\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(350, 270, 321, 231));
        groupBox->setStyleSheet(QString::fromUtf8("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
""));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 301, 181));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(66, 41));
        label->setMaximumSize(QSize(66, 16777215));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label);

        log = new QLineEdit(layoutWidget);
        log->setObjectName(QString::fromUtf8("log"));
        log->setMinimumSize(QSize(0, 41));
        log->setMaximumSize(QSize(16777215, 41));
        log->setSizeIncrement(QSize(0, 41));
        log->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(log);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 41));
        label_2->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_3->addWidget(label_2);

        pas = new QLineEdit(layoutWidget);
        pas->setObjectName(QString::fromUtf8("pas"));
        pas->setMinimumSize(QSize(0, 41));
        pas->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        pas->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(pas);


        verticalLayout->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(verticalLayout);

        checkBox = new QCheckBox(layoutWidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setMinimumSize(QSize(0, 20));
        checkBox->setMaximumSize(QSize(16777215, 20));

        verticalLayout_2->addWidget(checkBox);

        SignIN = new QPushButton(layoutWidget);
        SignIN->setObjectName(QString::fromUtf8("SignIN"));
        SignIN->setEnabled(true);
        SignIN->setStyleSheet(QString::fromUtf8("background-color: #0000FF;\n"
"background-color: rgb(130, 130, 130);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        SignIN->setAutoDefault(false);

        verticalLayout_2->addWidget(SignIN);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 0, 1031, 651));
        groupBox_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(52, 52, 52);\n"
"font: 12pt \"MS Shell Dlg 2\";"));
        Change = new QPushButton(groupBox_2);
        Change->setObjectName(QString::fromUtf8("Change"));
        Change->setGeometry(QRect(710, 600, 311, 51));
        Change->setStyleSheet(QString::fromUtf8("background-color: #0000FF;\n"
"background-color: rgb(130, 130, 130);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        ShowDataBase = new QPushButton(groupBox_2);
        ShowDataBase->setObjectName(QString::fromUtf8("ShowDataBase"));
        ShowDataBase->setGeometry(QRect(710, 350, 311, 51));
        ShowDataBase->setStyleSheet(QString::fromUtf8("background-color: #0000FF;\n"
"background-color: rgb(130, 130, 130);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(710, 450, 311, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: #0000FF;\n"
"background-color: rgb(130, 130, 130);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        delete_2 = new QPushButton(groupBox_2);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(710, 550, 311, 51));
        delete_2->setStyleSheet(QString::fromUtf8("background-color: #0000FF;\n"
"background-color: rgb(130, 130, 130);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(710, 400, 311, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #0000FF;\n"
"background-color: rgb(130, 130, 130);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        Search = new QPushButton(groupBox_2);
        Search->setObjectName(QString::fromUtf8("Search"));
        Search->setGeometry(QRect(710, 500, 311, 51));
        Search->setStyleSheet(QString::fromUtf8("background-color: #0000FF;\n"
"background-color: rgb(130, 130, 130);\n"
"font: 14pt \"MS Shell Dlg 2\";"));
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1000, 0, 31, 31));
        pushButton->setStyleSheet(QString::fromUtf8(""));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(710, 35, 311, 316));
        verticalLayout_4 = new QVBoxLayout(layoutWidget1);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_2 = new QCheckBox(layoutWidget1);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"border-color: 1px rgb(27, 27, 27);"));

        horizontalLayout_2->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(layoutWidget1);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"border-color: 1px rgb(27, 27, 27);"));

        horizontalLayout_2->addWidget(checkBox_3);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        id = new QLineEdit(layoutWidget1);
        id->setObjectName(QString::fromUtf8("id"));
        id->setMinimumSize(QSize(0, 50));
        id->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"MS Shell Dlg 2\";"));

        verticalLayout_3->addWidget(id);

        username = new QLineEdit(layoutWidget1);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(0, 50));
        username->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"MS Shell Dlg 2\";"));

        verticalLayout_3->addWidget(username);

        password = new QLineEdit(layoutWidget1);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(0, 50));
        password->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"MS Shell Dlg 2\";"));

        verticalLayout_3->addWidget(password);

        email = new QLineEdit(layoutWidget1);
        email->setObjectName(QString::fromUtf8("email"));
        email->setMinimumSize(QSize(0, 50));
        email->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"MS Shell Dlg 2\";"));

        verticalLayout_3->addWidget(email);

        phone = new QLineEdit(layoutWidget1);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setMinimumSize(QSize(0, 50));
        phone->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 16pt \"MS Shell Dlg 2\";"));

        verticalLayout_3->addWidget(phone);


        verticalLayout_4->addLayout(verticalLayout_3);

        textEdit = new QTextEdit(groupBox_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 30, 701, 621));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(310, 260, 371, 191));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 29);\n"
"font: 48pt \"MS Shell Dlg 2\";"));
        pushButton_2 = new QPushButton(groupBox_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(629, 260, 51, 31));
        layoutWidget->raise();
        pushButton_5->raise();
        delete_2->raise();
        pushButton_3->raise();
        Search->raise();
        Change->raise();
        ShowDataBase->raise();
        pushButton->raise();
        textEdit->raise();
        lineEdit->raise();
        pushButton_2->raise();
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        SignIN->setDefault(true);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Client", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Sign in", nullptr));
        label->setText(QApplication::translate("MainWindow", "  <html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">   Login</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\"> Password</span></p></body></html>", nullptr));
        checkBox->setText(QString());
        SignIN->setText(QApplication::translate("MainWindow", "Sign in", nullptr));
        groupBox_2->setTitle(QString());
        Change->setText(QApplication::translate("MainWindow", "Change", nullptr));
        ShowDataBase->setText(QApplication::translate("MainWindow", "Show data base", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Add", nullptr));
        delete_2->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        Search->setText(QApplication::translate("MainWindow", "Search", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "x", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "admin", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "user", nullptr));
        id->setText(QString());
        id->setPlaceholderText(QApplication::translate("MainWindow", "id", nullptr));
        username->setText(QString());
        username->setPlaceholderText(QApplication::translate("MainWindow", "Username", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QApplication::translate("MainWindow", "Pass", nullptr));
        email->setText(QString());
        email->setPlaceholderText(QApplication::translate("MainWindow", "Email", nullptr));
        phone->setText(QString());
        phone->setPlaceholderText(QApplication::translate("MainWindow", "Phone", nullptr));
        lineEdit->setText(QApplication::translate("MainWindow", "USER", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "x", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
