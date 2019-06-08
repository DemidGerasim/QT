/********************************************************************************
** Form generated from reading UI file 'adminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINWINDOW_H
#define UI_ADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminWindow
{
public:
    QGroupBox *groupBox_4;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_21;
    QLineEdit *lineEdit_20;
    QPushButton *SearchUsers;
    QTextEdit *textEdit_7;
    QGroupBox *groupBox_5;
    QWidget *layoutWidget_6;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_22;
    QLineEdit *lineEdit_21;
    QPushButton *Delete;
    QGroupBox *groupBox_6;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_23;
    QLineEdit *ProgLine;
    QPushButton *TableProgress;
    QTextEdit *ProgInfo;
    QPushButton *AddUser;
    QPushButton *Add;
    QGroupBox *groupBox_7;
    QWidget *layoutWidget_8;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_24;
    QLineEdit *LineProgDelete;
    QPushButton *DeleteProg;
    QPushButton *Change;
    QPushButton *Change_2;
    QPushButton *Change_3;

    void setupUi(QDialog *AdminWindow)
    {
        if (AdminWindow->objectName().isEmpty())
            AdminWindow->setObjectName(QString::fromUtf8("AdminWindow"));
        AdminWindow->resize(812, 650);
        AdminWindow->setMinimumSize(QSize(800, 650));
        AdminWindow->setMaximumSize(QSize(820, 700));
        AdminWindow->setStyleSheet(QString::fromUtf8(""));
        groupBox_4 = new QGroupBox(AdminWindow);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 40, 791, 181));
        groupBox_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(99, 49, 0);"));
        layoutWidget_5 = new QWidget(groupBox_4);
        layoutWidget_5->setObjectName(QString::fromUtf8("layoutWidget_5"));
        layoutWidget_5->setGeometry(QRect(10, 30, 771, 141));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_21 = new QLabel(layoutWidget_5);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setMinimumSize(QSize(0, 41));
        label_21->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";\n"
""));

        horizontalLayout_16->addWidget(label_21);

        lineEdit_20 = new QLineEdit(layoutWidget_5);
        lineEdit_20->setObjectName(QString::fromUtf8("lineEdit_20"));
        lineEdit_20->setMinimumSize(QSize(0, 41));
        lineEdit_20->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(56, 56, 56);"));

        horizontalLayout_16->addWidget(lineEdit_20);

        SearchUsers = new QPushButton(layoutWidget_5);
        SearchUsers->setObjectName(QString::fromUtf8("SearchUsers"));
        SearchUsers->setMinimumSize(QSize(0, 41));
        SearchUsers->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_16->addWidget(SearchUsers);


        verticalLayout_12->addLayout(horizontalLayout_16);

        textEdit_7 = new QTextEdit(layoutWidget_5);
        textEdit_7->setObjectName(QString::fromUtf8("textEdit_7"));
        textEdit_7->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(56, 56, 56);"));

        verticalLayout_12->addWidget(textEdit_7);

        groupBox_5 = new QGroupBox(AdminWindow);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 230, 791, 91));
        groupBox_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(99, 49, 0);"));
        layoutWidget_6 = new QWidget(groupBox_5);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(10, 30, 771, 51));
        horizontalLayout_17 = new QHBoxLayout(layoutWidget_6);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";\n"
"\n"
""));

        horizontalLayout_17->addWidget(label_22);

        lineEdit_21 = new QLineEdit(layoutWidget_6);
        lineEdit_21->setObjectName(QString::fromUtf8("lineEdit_21"));
        lineEdit_21->setMinimumSize(QSize(0, 43));
        lineEdit_21->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(56, 56, 56);"));

        horizontalLayout_17->addWidget(lineEdit_21);

        Delete = new QPushButton(layoutWidget_6);
        Delete->setObjectName(QString::fromUtf8("Delete"));
        Delete->setMinimumSize(QSize(0, 43));
        Delete->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_17->addWidget(Delete);

        groupBox_6 = new QGroupBox(AdminWindow);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 330, 791, 221));
        groupBox_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(99, 49, 0);"));
        layoutWidget_7 = new QWidget(groupBox_6);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 30, 771, 181));
        verticalLayout_13 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_23 = new QLabel(layoutWidget_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(0, 41));
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";\n"
""));

        horizontalLayout_18->addWidget(label_23);

        ProgLine = new QLineEdit(layoutWidget_7);
        ProgLine->setObjectName(QString::fromUtf8("ProgLine"));
        ProgLine->setMinimumSize(QSize(0, 41));
        ProgLine->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(56, 56, 56);"));

        horizontalLayout_18->addWidget(ProgLine);

        TableProgress = new QPushButton(layoutWidget_7);
        TableProgress->setObjectName(QString::fromUtf8("TableProgress"));
        TableProgress->setMinimumSize(QSize(0, 41));
        TableProgress->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_18->addWidget(TableProgress);


        verticalLayout_13->addLayout(horizontalLayout_18);

        ProgInfo = new QTextEdit(layoutWidget_7);
        ProgInfo->setObjectName(QString::fromUtf8("ProgInfo"));
        ProgInfo->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(56, 56, 56);"));

        verticalLayout_13->addWidget(ProgInfo);

        AddUser = new QPushButton(AdminWindow);
        AddUser->setObjectName(QString::fromUtf8("AddUser"));
        AddUser->setGeometry(QRect(10, 10, 161, 25));
        AddUser->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 49, 0);\n"
"color: rgb(255, 255, 255);"));
        Add = new QPushButton(AdminWindow);
        Add->setObjectName(QString::fromUtf8("Add"));
        Add->setGeometry(QRect(180, 10, 161, 25));
        Add->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 49, 0);\n"
"color: rgb(255, 255, 255);"));
        groupBox_7 = new QGroupBox(AdminWindow);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setGeometry(QRect(10, 560, 791, 91));
        groupBox_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(99, 49, 0);"));
        layoutWidget_8 = new QWidget(groupBox_7);
        layoutWidget_8->setObjectName(QString::fromUtf8("layoutWidget_8"));
        layoutWidget_8->setGeometry(QRect(10, 30, 771, 51));
        horizontalLayout_19 = new QHBoxLayout(layoutWidget_8);
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(0, 0, 0, 0);
        label_24 = new QLabel(layoutWidget_8);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 75 14pt \"MS Shell Dlg 2\";\n"
"\n"
""));

        horizontalLayout_19->addWidget(label_24);

        LineProgDelete = new QLineEdit(layoutWidget_8);
        LineProgDelete->setObjectName(QString::fromUtf8("LineProgDelete"));
        LineProgDelete->setMinimumSize(QSize(0, 43));
        LineProgDelete->setStyleSheet(QString::fromUtf8("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(56, 56, 56);"));

        horizontalLayout_19->addWidget(LineProgDelete);

        DeleteProg = new QPushButton(layoutWidget_8);
        DeleteProg->setObjectName(QString::fromUtf8("DeleteProg"));
        DeleteProg->setMinimumSize(QSize(0, 43));
        DeleteProg->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_19->addWidget(DeleteProg);

        Change = new QPushButton(AdminWindow);
        Change->setObjectName(QString::fromUtf8("Change"));
        Change->setGeometry(QRect(350, 10, 161, 25));
        Change->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 49, 0);\n"
"color: rgb(255, 255, 255);"));
        Change_2 = new QPushButton(AdminWindow);
        Change_2->setObjectName(QString::fromUtf8("Change_2"));
        Change_2->setGeometry(QRect(520, 10, 181, 25));
        Change_2->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 49, 0);\n"
"color: rgb(255, 255, 255);"));
        Change_3 = new QPushButton(AdminWindow);
        Change_3->setObjectName(QString::fromUtf8("Change_3"));
        Change_3->setGeometry(QRect(710, 10, 91, 25));
        Change_3->setStyleSheet(QString::fromUtf8("background-color: rgb(99, 49, 0);\n"
"color: rgb(255, 255, 255);"));

        retranslateUi(AdminWindow);

        QMetaObject::connectSlotsByName(AdminWindow);
    } // setupUi

    void retranslateUi(QDialog *AdminWindow)
    {
        AdminWindow->setWindowTitle(QApplication::translate("AdminWindow", "Dialog", nullptr));
        groupBox_4->setTitle(QApplication::translate("AdminWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\320\265\320\271", nullptr));
        label_21->setText(QApplication::translate("AdminWindow", " \320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265:", nullptr));
        lineEdit_20->setText(QString());
        SearchUsers->setText(QApplication::translate("AdminWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        groupBox_5->setTitle(QApplication::translate("AdminWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\270\320\267 \320\261\320\260\320\267\321\213 \320\267\320\260\321\200\320\265\320\263\320\270\321\201\321\202\321\200\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_22->setText(QApplication::translate("AdminWindow", " ID", nullptr));
        Delete->setText(QApplication::translate("AdminWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        groupBox_6->setTitle(QApplication::translate("AdminWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260 \321\201 \320\272\320\275\320\270\320\263\320\260\320\274\320\270", nullptr));
        label_23->setText(QApplication::translate("AdminWindow", " \320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265:", nullptr));
        ProgLine->setText(QString());
        TableProgress->setText(QApplication::translate("AdminWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        AddUser->setText(QApplication::translate("AdminWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        Add->setText(QApplication::translate("AdminWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\260\320\264\320\274\320\270\320\275\320\260", nullptr));
        groupBox_7->setTitle(QApplication::translate("AdminWindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\272\320\275\320\270\320\263\320\270 \320\270\320\267 \320\261\320\260\320\267\321\213", nullptr));
        label_24->setText(QApplication::translate("AdminWindow", " ID", nullptr));
        DeleteProg->setText(QApplication::translate("AdminWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        Change->setText(QApplication::translate("AdminWindow", "\320\241\320\274\320\265\320\275\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        Change_2->setText(QApplication::translate("AdminWindow", "\320\230\320\267\320\274\320\265\320\275\320\265\320\275\320\270\320\265 \320\264\320\260\320\275\320\275\321\213\321\205 \320\276 \320\272\320\275\320\270\320\263\320\260\321\205", nullptr));
        Change_3->setText(QApplication::translate("AdminWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\272\320\275\320\270\320\263\321\203", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AdminWindow: public Ui_AdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINWINDOW_H
