#ifndef FORM5_H
#define FORM5_H

#include <QDialog>

namespace Ui {
class form5;
}

class form5 : public QDialog
{
    Q_OBJECT

public:
    explicit form5(QWidget *parent = nullptr);
    ~form5();

private:
    Ui::form5 *ui;
};

#endif // FORM5_H
