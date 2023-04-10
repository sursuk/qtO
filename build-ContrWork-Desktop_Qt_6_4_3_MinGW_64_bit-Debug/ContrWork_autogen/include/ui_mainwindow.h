/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
    QPushButton *turnRight;
    QPushButton *turnLeft;
    QPushButton *mirrorHorizontal;
    QPushButton *mirrorVertical;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(449, 460);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        turnRight = new QPushButton(centralwidget);
        turnRight->setObjectName("turnRight");
        turnRight->setGeometry(QRect(90, 240, 101, 24));
        turnLeft = new QPushButton(centralwidget);
        turnLeft->setObjectName("turnLeft");
        turnLeft->setGeometry(QRect(90, 280, 101, 24));
        mirrorHorizontal = new QPushButton(centralwidget);
        mirrorHorizontal->setObjectName("mirrorHorizontal");
        mirrorHorizontal->setGeometry(QRect(90, 330, 101, 24));
        mirrorVertical = new QPushButton(centralwidget);
        mirrorVertical->setObjectName("mirrorVertical");
        mirrorVertical->setGeometry(QRect(90, 370, 101, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 449, 22));
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
        turnRight->setText(QCoreApplication::translate("MainWindow", "turnRight", nullptr));
        turnLeft->setText(QCoreApplication::translate("MainWindow", "turnLeft", nullptr));
        mirrorHorizontal->setText(QCoreApplication::translate("MainWindow", "mirrorHorizontal", nullptr));
        mirrorVertical->setText(QCoreApplication::translate("MainWindow", "mirrorVertical", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
