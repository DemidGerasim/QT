/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
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
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *lineEdit_7;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *lineEdit_9;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_11;
    QLineEdit *lineEdit_11;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(828, 613);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(44, 44, 44);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(260, 150, 321, 241));
        groupBox->setStyleSheet(QLatin1String("color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 40, 301, 191));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(66, 41));
        label->setMaximumSize(QSize(66, 16777215));
        label->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMinimumSize(QSize(0, 41));
        lineEdit->setMaximumSize(QSize(16777215, 41));
        lineEdit->setSizeIncrement(QSize(0, 41));
        lineEdit->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(0, 41));
        label_2->setStyleSheet(QStringLiteral("font: 14pt \"MS Shell Dlg 2\";"));

        horizontalLayout_2->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMinimumSize(QSize(0, 41));
        lineEdit_2->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_2->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 98);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 98);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_2->addWidget(pushButton_2);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(240, 80, 361, 371));
        groupBox_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 8pt \"MS Shell Dlg 2\";"));
        layoutWidget_3 = new QWidget(groupBox_2);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(10, 30, 341, 331));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(100, 41));
        label_7->setMaximumSize(QSize(70, 16777215));
        label_7->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(label_7);

        lineEdit_7 = new QLineEdit(layoutWidget_3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setMinimumSize(QSize(0, 41));
        lineEdit_7->setMaximumSize(QSize(16777215, 41));
        lineEdit_7->setSizeIncrement(QSize(0, 41));
        lineEdit_7->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_7->addWidget(lineEdit_7);


        verticalLayout_7->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(100, 41));
        label_8->setMaximumSize(QSize(70, 16777215));
        label_8->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(label_8);

        lineEdit_8 = new QLineEdit(layoutWidget_3);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(0, 41));
        lineEdit_8->setMaximumSize(QSize(16777215, 41));
        lineEdit_8->setSizeIncrement(QSize(0, 41));
        lineEdit_8->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_8->addWidget(lineEdit_8);


        verticalLayout_7->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(100, 41));
        label_9->setMaximumSize(QSize(70, 16777215));
        label_9->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(label_9);

        lineEdit_9 = new QLineEdit(layoutWidget_3);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(0, 41));
        lineEdit_9->setMaximumSize(QSize(16777215, 41));
        lineEdit_9->setSizeIncrement(QSize(0, 41));
        lineEdit_9->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_9->addWidget(lineEdit_9);


        verticalLayout_7->addLayout(horizontalLayout_9);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_11 = new QLabel(layoutWidget_3);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(100, 41));
        label_11->setMaximumSize(QSize(70, 16777215));
        label_11->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(label_11);

        lineEdit_11 = new QLineEdit(layoutWidget_3);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setMinimumSize(QSize(0, 41));
        lineEdit_11->setMaximumSize(QSize(16777215, 41));
        lineEdit_11->setSizeIncrement(QSize(0, 41));
        lineEdit_11->setStyleSheet(QLatin1String("font: 14pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));

        horizontalLayout_11->addWidget(lineEdit_11);


        verticalLayout_7->addLayout(horizontalLayout_11);

        pushButton_7 = new QPushButton(layoutWidget_3);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 98);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_7->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(layoutWidget_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 98);\n"
"color: rgb(255, 255, 255);\n"
"font: 14pt \"MS Shell Dlg 2\";"));

        verticalLayout_7->addWidget(pushButton_8);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 828, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Sign in", nullptr));
        label->setText(QApplication::translate("MainWindow", "  <html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\">   Login</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#ffffff;\"> Password</span></p></body></html>", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Sign in", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\320\241heck in", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Check in", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Username", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Password", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Email", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Phone", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "To apply", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "Back to the entrance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
