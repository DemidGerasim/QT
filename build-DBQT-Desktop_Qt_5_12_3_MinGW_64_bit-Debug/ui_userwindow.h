/********************************************************************************
** Form generated from reading UI file 'userwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERWINDOW_H
#define UI_USERWINDOW_H

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

class Ui_UserWindow
{
public:
    QGroupBox *groupBox_6;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_23;
    QLineEdit *ProgLine;
    QPushButton *TableProgress;
    QTextEdit *ProgInfo;

    void setupUi(QDialog *UserWindow)
    {
        if (UserWindow->objectName().isEmpty())
            UserWindow->setObjectName(QString::fromUtf8("UserWindow"));
        UserWindow->resize(800, 600);
        UserWindow->setMinimumSize(QSize(800, 600));
        UserWindow->setMaximumSize(QSize(800, 600));
        groupBox_6 = new QGroupBox(UserWindow);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setGeometry(QRect(10, 0, 791, 591));
        groupBox_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255,255);"));
        layoutWidget_7 = new QWidget(groupBox_6);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(10, 30, 771, 551));
        verticalLayout_13 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_23 = new QLabel(layoutWidget_7);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setMinimumSize(QSize(0, 41));
        label_23->setStyleSheet(QString::fromUtf8("color: rgb(255, 255,255);\n"
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


        retranslateUi(UserWindow);

        QMetaObject::connectSlotsByName(UserWindow);
    } // setupUi

    void retranslateUi(QDialog *UserWindow)
    {
        UserWindow->setWindowTitle(QApplication::translate("UserWindow", "Dialog", nullptr));
        groupBox_6->setTitle(QApplication::translate("UserWindow", "\320\237\320\276\321\201\320\274\320\276\321\202\321\200\320\265\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203 ", nullptr));
        label_23->setText(QApplication::translate("UserWindow", " \320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\264\320\260\320\275\320\275\321\213\320\265:", nullptr));
        ProgLine->setText(QString());
        TableProgress->setText(QApplication::translate("UserWindow", "\320\237\320\276\320\270\321\201\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserWindow: public Ui_UserWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERWINDOW_H
