#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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


public slots:
    void timeout();

private slots:
    void on_BtnSTART_clicked();
    void on_BtnPlayTime120_clicked();
    void on_BtnPlayTime300_clicked();
    void on_BtnSTOP_clicked();
    void on_BtnSwichPlayer2_clicked();
    void on_BtnSwichPlayer1_clicked();


private:
    Ui::MainWindow *ui;
    short player1Time= 0;
    short player2Time= 0;
    short currentPlayer= 0;
    short gameTime=0;
    QTimer * pQTimer;

    void updateProgressBar();
    void setGameInfoText(QString, short);
};
#endif // MAINWINDOW_H
