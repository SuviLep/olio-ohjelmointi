#include "mainwindow.h"
#include "form2.h"
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
    ui= nullptr;
}

void MainWindow::on_btnTest_clicked()
{
    x++;
    QString s = QString::number(x);
    qDebug()<<"Painiketta painettu";
    ui->labelResult->setText("painiketta painettu" +s+"kertaa");
}


void MainWindow::on_btnSave_clicked()
{
    QString fname=ui->textFname->text();
    QString lname=ui->textLname->text();
    ui->labelMessage->setText("Terve"+ fname+""+lname);
}


void MainWindow::on_btnOpenForm2_clicked()
{
    Form2 objectForm2;
    objectForm2->open();
}

