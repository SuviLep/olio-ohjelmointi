#include "form5.h"
#include "ui_form5.h"

form5::form5(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::form5)
{
    ui->setupUi(this);
}

form5::~form5()
{
    delete ui;
}
