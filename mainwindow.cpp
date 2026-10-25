#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QWidget>  
#include <QVBoxLayout>
#include "carPriceOnYears.cpp"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_showPrice_clicked()
{
    //set window
    QWidget *subWnd = new QWidget(this, Qt::Window); 
    //set layout
    QVBoxLayout *l = new QVBoxLayout(subWnd);
    //set  car
    Car car("",size_t(ui->price->text().toInt()));
    //set wnd settings
    subWnd->setWindowTitle("results");
    subWnd->setFixedSize(400,600);
    subWnd->setStyleSheet(
        "QWidget{background-color:black;}"
        "QLabel{color:white;}"
    );  
    //
    for (size_t i = 0; i < ui->numOfYears->text().toInt(); i++)
    {
        QLabel *label= new QLabel(((i==0)?QString("Car On not Used"):QString("Price After ") +QString::number(i)+" years:")+QString::number((i==0)?car.getNewPrice() :car.getPriceonUsed(i-1))+ui->unit->text());
        l->addWidget(label);
    } 
    //show it
    subWnd->show();
}