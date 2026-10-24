/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *CarPriceTxt;
    QLabel *CarNameTxt_2;
    QLabel *CarEnter;
    QPushButton *priceButton;
    QLineEdit *CarPriceTxt_2;
    QLabel *CarNameTxt_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(614, 411);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        CarPriceTxt = new QLineEdit(centralwidget);
        CarPriceTxt->setObjectName("CarPriceTxt");
        CarPriceTxt->setGeometry(QRect(220, 160, 341, 41));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        CarPriceTxt->setFont(font);
        CarPriceTxt->setTabletTracking(true);
        CarPriceTxt->setText(QString::fromUtf8(""));
        CarPriceTxt->setMaxLength(99);
        CarPriceTxt->setCursorPosition(0);
        CarNameTxt_2 = new QLabel(centralwidget);
        CarNameTxt_2->setObjectName("CarNameTxt_2");
        CarNameTxt_2->setGeometry(QRect(120, 160, 91, 41));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        CarNameTxt_2->setFont(font1);
        CarEnter = new QLabel(centralwidget);
        CarEnter->setObjectName("CarEnter");
        CarEnter->setGeometry(QRect(190, 20, 241, 81));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setItalic(true);
        CarEnter->setFont(font2);
        CarEnter->setLineWidth(12);
        CarEnter->setTextFormat(Qt::TextFormat::AutoText);
        CarEnter->setIndent(34);
        priceButton = new QPushButton(centralwidget);
        priceButton->setObjectName("priceButton");
        priceButton->setGeometry(QRect(250, 290, 161, 81));
        QFont font3;
        font3.setPointSize(23);
        priceButton->setFont(font3);
        priceButton->setCursor(QCursor(Qt::CursorShape::OpenHandCursor));
        CarPriceTxt_2 = new QLineEdit(centralwidget);
        CarPriceTxt_2->setObjectName("CarPriceTxt_2");
        CarPriceTxt_2->setGeometry(QRect(220, 210, 331, 41));
        CarPriceTxt_2->setFont(font);
        CarPriceTxt_2->setTabletTracking(true);
        CarPriceTxt_2->setText(QString::fromUtf8(""));
        CarPriceTxt_2->setMaxLength(99);
        CarPriceTxt_2->setCursorPosition(0);
        CarNameTxt_3 = new QLabel(centralwidget);
        CarNameTxt_3->setObjectName("CarNameTxt_3");
        CarNameTxt_3->setGeometry(QRect(0, 200, 231, 61));
        QFont font4;
        font4.setPointSize(18);
        font4.setBold(true);
        CarNameTxt_3->setFont(font4);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        CarNameTxt_2->setText(QCoreApplication::translate("MainWindow", "  Price:", nullptr));
        CarEnter->setText(QCoreApplication::translate("MainWindow", "Get Car Prices:", nullptr));
        priceButton->setText(QCoreApplication::translate("MainWindow", "Get Prices", nullptr));
        CarNameTxt_3->setText(QCoreApplication::translate("MainWindow", "Number Of Years:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
