#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWidget>
#include <iostream>
/// @brief that function do start 
///@param parent that 
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
/// @brief that delete a window
MainWindow::~MainWindow()
{
    delete ui;
}

    //set argc
///
int MainWindow::on_priceButton_clicked()
{
    int argc  = 0;
    //set QApp
    QApplication app( ,NULL);
    //set widget
    QWidget A;
    A.show();
    //add
    return app.exec();
}