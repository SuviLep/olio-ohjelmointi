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
    ui = nullptr;
}

void MainWindow::on_BtnClear_clicked()
{
    state=1;
    ClearAndEnterHandler();
}

void MainWindow::on_BtnN1_clicked()
{
    numberBtn="1";
    numberClickedHandler();
}

void MainWindow::on_BtnN2_clicked()
{
    numberBtn= "2";
    numberClickedHandler();
}

void MainWindow::on_BtnN3_clicked()
{
    numberBtn= "3";
    numberClickedHandler();
}

void MainWindow::on_BtnN4_clicked()
{
    numberBtn= "4";
    numberClickedHandler();
}

void MainWindow::on_BtnN5_clicked()
{
    numberBtn= "5";
    numberClickedHandler();
}

void MainWindow::on_BtnN6_clicked()
{
    numberBtn= "6";
    numberClickedHandler();
}

void MainWindow::on_BtnN7_clicked()
{
    numberBtn= "7";
    numberClickedHandler();
}

void MainWindow::on_BtnN8_clicked()
{
    numberBtn= "8";
    numberClickedHandler();
}

void MainWindow::on_BtnN9_clicked()
{
    numberBtn= "9";
    numberClickedHandler();
}

void MainWindow::on_BtnN0_clicked()
{
    numberBtn= "0";
    numberClickedHandler();
}

void MainWindow::on_BtnEnter_clicked()
{
    state=2;
    ClearAndEnterHandler();
}

void MainWindow::on_BtnAdd_clicked()
{
    operand= 1;
}

void MainWindow::on_BtnSub_clicked()
{
    operand= 2;
}

void MainWindow::on_BtnMul_clicked()
{
    operand= 3;
}

void MainWindow::on_BtnDiv_clicked()
{
    operand= 4;
}

void MainWindow::numberClickedHandler()
{
    if(operand == 1 || operand == 2 || operand==3 || operand==4)
    {
        number2=number2+ numberBtn;
        ui->lineEditNum2->setText(number2);
    }
    else
    {
    number1=number1+numberBtn;
    ui->lineEditNum1->setText(number1);
    }
}

void MainWindow::ClearAndEnterHandler()
{

    if(state==1)
    {
        ui->lineEditNum1->clear();
        ui->lineEditNum2->clear();
        ui->lineEditResult->clear();
        number1.clear();
        number2.clear();
        result=0.0;
        operand=0;
    }

    //Muutetaan number1 ja number 2 arvot floatiksi
    else if(state==2) {
        float n1= number1.toFloat();
        float n2= number2.toFloat();

        switch(operand){
        case 1:
            result = n1+n2;
            break;
        case 2:
            result = n1-n2;
            break;
        case 3:
            result = n1*n2;
            break;
        case 4:
            result = n1/n2;
            break;
        }
        qDebug() << result;

        ui->lineEditResult->setText(QString::number(result));
    }
    }


