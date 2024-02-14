#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
    ui=nullptr;
}

void MainWindow::on_BtnCount_clicked()
{
    x++;
    QString s = QString::number(x);
    qDebug()<<"painiketta count painettu";
    ui->lineEdit->setText("Lisätäään yhdellä: "+s+" kertaa");
}


void MainWindow::on_BtnReset_clicked()
{
    x= 0;;
    QString s = QString::number(x);
    qDebug()<<"painiketta count painettu";
    ui->lineEdit->setText("Nollataan "+s);
}

