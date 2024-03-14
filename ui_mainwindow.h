/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLineEdit *m_usernameEdit;
    QPushButton *pushButton;
    QLineEdit *m_pswEdit;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pushButton_3;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1166, 796);
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("applications-engineering")));
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(250, 50, 521, 531));
        widget->setStyleSheet(QString::fromUtf8("background-color: #030D2E;\n"
"border: none;\n"
"border-radius: 20px;"));
        m_usernameEdit = new QLineEdit(widget);
        m_usernameEdit->setObjectName("m_usernameEdit");
        m_usernameEdit->setGeometry(QRect(80, 230, 361, 31));
        m_usernameEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom: 2px solid #0b89c6;\n"
"color: rgba(255, 255, 255, 230);\n"
"padding-bottom: 15px;\n"
"font-size: 16px;\n"
"font-family: Roboto, Sans Serif;"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(160, 440, 201, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #0b89c6;\n"
"padding: 10px 5px;\n"
"border-radius: 7px;\n"
"font-size: 16px;\n"
"font-family: Roboto, Sans Serif;\n"
"color:  #030D2E;"));
        m_pswEdit = new QLineEdit(widget);
        m_pswEdit->setObjectName("m_pswEdit");
        m_pswEdit->setGeometry(QRect(80, 320, 361, 31));
        m_pswEdit->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0);\n"
"border:none;\n"
"border-bottom: 2px solid #0b89c6;\n"
"color: rgba(255, 255, 255, 230);\n"
"padding-bottom: 15px;\n"
"font-size: 16px;\n"
"font-family: Roboto, Sans Serif;"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(80, 30, 361, 141));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/208453-P05HEP-165.png")));
        label->setScaledContents(true);
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(87, 130, 350, 350));
        label_3->setStyleSheet(QString::fromUtf8(""));
        label_3->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/background_nato.svg")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(85, 130, 350, 350));
        label_4->setStyleSheet(QString::fromUtf8(""));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/background_nato.svg")));
        label_4->setScaledContents(true);
        label_3->raise();
        label_4->raise();
        pushButton->raise();
        m_usernameEdit->raise();
        m_pswEdit->raise();
        label->raise();
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(50, 660, 121, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: #0b89c6;\n"
"padding: 10px 5px;\n"
"border-radius: 7px;\n"
"font-size: 16px;\n"
"font-family: Roboto, Sans Serif;\n"
"color:  #030D2E;"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(920, 550, 150, 150));
        label_2->setStyleSheet(QString::fromUtf8(""));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/208453-P05HEP-165JJJJJJ.png")));
        label_2->setScaledContents(true);
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(230, 660, 121, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: #030D2E;\n"
"padding: 10px 5px;\n"
"border-radius: 7px;\n"
"font-size: 16px;\n"
"font-family: Roboto, Sans Serif;\n"
"color:  #0b89c6; "));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1166, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        m_usernameEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        m_pswEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_2->setText(QString());
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
