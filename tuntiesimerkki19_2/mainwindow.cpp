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
}

void MainWindow::on_BtnSave_clicked()
{
    QString Fname;
    Fname= ui->textFname->text();
    ui->labelResult->setText("Terve " + Fname);
}

