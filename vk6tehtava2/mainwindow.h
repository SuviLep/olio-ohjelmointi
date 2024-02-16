#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BtnClear_clicked();

    void on_BtnN1_clicked();

    void on_BtnN2_clicked();

    void on_BtnN3_clicked();

    void on_BtnN4_clicked();

    void on_BtnN5_clicked();

    void on_BtnN6_clicked();

    void on_BtnN7_clicked();

    void on_BtnN8_clicked();

    void on_BtnN9_clicked();

    void on_BtnN0_clicked();

    void on_BtnEnter_clicked();

    void on_BtnAdd_clicked();

    void on_BtnSub_clicked();

    void on_BtnMul_clicked();

    void on_BtnDiv_clicked();

private:
    Ui::MainWindow *ui;
    QString number1, number2, numberBtn;

    int state=0;
    float result=0;
    short operand=0;

    void numberClickedHandler();
    void ClearAndEnterHandler();
    void AddSumMulDivClickHandler();
    void ResetLineEdits();

};
#endif // MAINWINDOW_H
