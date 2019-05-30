/********************************************************************************
** Form generated from reading UI file 'changedata.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEDATA_H
#define UI_CHANGEDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeData
{
public:
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QLineEdit *id;
    QPushButton *pushButton_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *phone;
    QPushButton *pushButton_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *name;
    QPushButton *name_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *surname;
    QPushButton *surname_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *Patronym;
    QLineEdit *otch;
    QPushButton *pushButton_12;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_13;
    QLineEdit *login;
    QPushButton *login_2;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_12;
    QLineEdit *password;
    QPushButton *password_2;

    void setupUi(QDialog *ChangeData)
    {
        if (ChangeData->objectName().isEmpty())
            ChangeData->setObjectName(QString::fromUtf8("ChangeData"));
        ChangeData->resize(359, 431);
        layoutWidget_3 = new QWidget(ChangeData);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 10, 341, 411));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_15 = new QLabel(layoutWidget_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(100, 41));
        label_15->setMaximumSize(QSize(100, 16777215));
        label_15->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_15->addWidget(label_15);

        id = new QLineEdit(layoutWidget_3);
        id->setObjectName(QString::fromUtf8("id"));
        id->setMinimumSize(QSize(0, 41));
        id->setMaximumSize(QSize(16777215, 41));
        id->setSizeIncrement(QSize(0, 41));
        id->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_15->addWidget(id);

        pushButton_8 = new QPushButton(layoutWidget_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_15->addWidget(pushButton_8);


        verticalLayout_7->addLayout(horizontalLayout_15);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(100, 41));
        label_7->setMaximumSize(QSize(70, 16777215));
        label_7->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(label_7);

        phone = new QLineEdit(layoutWidget_3);
        phone->setObjectName(QString::fromUtf8("phone"));
        phone->setMinimumSize(QSize(0, 41));
        phone->setMaximumSize(QSize(16777215, 41));
        phone->setSizeIncrement(QSize(0, 41));
        phone->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_7->addWidget(phone);

        pushButton_7 = new QPushButton(layoutWidget_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_7->addWidget(pushButton_7);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(100, 41));
        label_8->setMaximumSize(QSize(70, 16777215));
        label_8->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_8->addWidget(label_8);

        name = new QLineEdit(layoutWidget_3);
        name->setObjectName(QString::fromUtf8("name"));
        name->setMinimumSize(QSize(0, 41));
        name->setMaximumSize(QSize(16777215, 41));
        name->setSizeIncrement(QSize(0, 41));
        name->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_8->addWidget(name);

        name_2 = new QPushButton(layoutWidget_3);
        name_2->setObjectName(QString::fromUtf8("name_2"));
        name_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_8->addWidget(name_2);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(100, 41));
        label_9->setMaximumSize(QSize(70, 16777215));
        label_9->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_9->addWidget(label_9);

        surname = new QLineEdit(layoutWidget_3);
        surname->setObjectName(QString::fromUtf8("surname"));
        surname->setMinimumSize(QSize(0, 41));
        surname->setMaximumSize(QSize(16777215, 41));
        surname->setSizeIncrement(QSize(0, 41));
        surname->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_9->addWidget(surname);

        surname_2 = new QPushButton(layoutWidget_3);
        surname_2->setObjectName(QString::fromUtf8("surname_2"));
        surname_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_9->addWidget(surname_2);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        Patronym = new QLabel(layoutWidget_3);
        Patronym->setObjectName(QString::fromUtf8("Patronym"));
        Patronym->setMinimumSize(QSize(100, 41));
        Patronym->setMaximumSize(QSize(70, 16777215));
        Patronym->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_11->addWidget(Patronym);

        otch = new QLineEdit(layoutWidget_3);
        otch->setObjectName(QString::fromUtf8("otch"));
        otch->setMinimumSize(QSize(0, 41));
        otch->setMaximumSize(QSize(16777215, 41));
        otch->setSizeIncrement(QSize(0, 41));
        otch->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_11->addWidget(otch);

        pushButton_12 = new QPushButton(layoutWidget_3);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_11->addWidget(pushButton_12);


        verticalLayout_7->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_13 = new QLabel(layoutWidget_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(100, 41));
        label_13->setMaximumSize(QSize(100, 16777215));
        label_13->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_13->addWidget(label_13);

        login = new QLineEdit(layoutWidget_3);
        login->setObjectName(QString::fromUtf8("login"));
        login->setMinimumSize(QSize(0, 41));
        login->setMaximumSize(QSize(16777215, 41));
        login->setSizeIncrement(QSize(0, 41));
        login->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_13->addWidget(login);

        login_2 = new QPushButton(layoutWidget_3);
        login_2->setObjectName(QString::fromUtf8("login_2"));
        login_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_13->addWidget(login_2);


        verticalLayout_7->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_12 = new QLabel(layoutWidget_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(100, 41));
        label_12->setMaximumSize(QSize(100, 16777215));
        label_12->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_12->addWidget(label_12);

        password = new QLineEdit(layoutWidget_3);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(0, 41));
        password->setMaximumSize(QSize(16777215, 41));
        password->setSizeIncrement(QSize(0, 41));
        password->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));

        horizontalLayout_12->addWidget(password);

        password_2 = new QPushButton(layoutWidget_3);
        password_2->setObjectName(QString::fromUtf8("password_2"));
        password_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_12->addWidget(password_2);


        verticalLayout_7->addLayout(horizontalLayout_12);


        retranslateUi(ChangeData);

        QMetaObject::connectSlotsByName(ChangeData);
    } // setupUi

    void retranslateUi(QDialog *ChangeData)
    {
        ChangeData->setWindowTitle(QApplication::translate("ChangeData", "Dialog", nullptr));
        label_15->setText(QApplication::translate("ChangeData", " ID", nullptr));
        pushButton_8->setText(QApplication::translate("ChangeData", "<--", nullptr));
        label_7->setText(QApplication::translate("ChangeData", " Phone", nullptr));
        pushButton_7->setText(QApplication::translate("ChangeData", "OK", nullptr));
        label_8->setText(QApplication::translate("ChangeData", " Name", nullptr));
        name_2->setText(QApplication::translate("ChangeData", "OK", nullptr));
        label_9->setText(QApplication::translate("ChangeData", " Surname", nullptr));
        surname_2->setText(QApplication::translate("ChangeData", "OK", nullptr));
        Patronym->setText(QApplication::translate("ChangeData", " Patronymic", nullptr));
        pushButton_12->setText(QApplication::translate("ChangeData", "OK", nullptr));
        label_13->setText(QApplication::translate("ChangeData", " Login", nullptr));
        login_2->setText(QApplication::translate("ChangeData", "OK", nullptr));
        label_12->setText(QApplication::translate("ChangeData", " Password", nullptr));
        password_2->setText(QApplication::translate("ChangeData", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeData: public Ui_ChangeData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEDATA_H
