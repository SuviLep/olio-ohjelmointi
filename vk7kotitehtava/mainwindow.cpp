#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //start nappi otetaan alkuun pois käytöstä
    ui->BtnSTART->setDisabled(true);

    //luodaaan uusi objekti
    pQTimer= new QTimer();


    //asetetaan progressBarit molemmilta pelaajilta aluksi 0:ksi
    ui->BarPlayer1->setValue(0);
    ui->Barplayer2->setValue(0);

    //Ohjeteksti label olioon, fonttikoko
    setGameInfoText("Select playtime and press start",16);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}

void MainWindow::timeout()
{
    if (currentPlayer==1){
        player1Time = player1Time - 1;
        updateProgressBar();
        qDebug("pelaaja1:n aika vähenee...");
    }
    else {
        player2Time= player2Time-1;
        updateProgressBar();
        qDebug("pelaaja2:n aika vähenee");
    }
}

void MainWindow::on_BtnSTART_clicked()
{
    //Alustetaan pelaaja yksi aloittavaksi pelaajaksi
    currentPlayer=1;
    setGameInfoText("Player 1 starts",16);

    //Alustetaan molemmille pelaajille sama aika pelin alkuun
    player1Time= gameTime;
    player2Time= gameTime;

    connect (pQTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    pQTimer->start(100);
}


void MainWindow::on_BtnPlayTime120_clicked()
{
    gameTime=120;
    setGameInfoText("Chosen time 120 sec.",16);

    //startti saataville..
    ui->BtnSTART->setDisabled(false);

    //Asetetaan molempien pelaajien peliajat maximiin
    ui->BarPlayer1->setMaximum(gameTime);
    ui->Barplayer2->setMaximum(gameTime);
}


void MainWindow::on_BtnPlayTime300_clicked()
{
    gameTime=300;
    setGameInfoText("Chosen time 5 min.",16);

    //startti saataville..
    ui->BtnSTART->setDisabled(false);

    //Asetetaan molempien pelaajien peliajat maximiin
    ui->BarPlayer1->setMaximum(gameTime);
    ui->Barplayer2->setMaximum(gameTime);
}

void MainWindow::on_BtnSTOP_clicked()
{
    pQTimer->stop();

    //barplayerit asetetaan nollaksi
    ui->BarPlayer1->setValue(0);
    ui->Barplayer2->setValue(0);

    setGameInfoText("Select playtime and start the game.",16);

    //start nappi otetaan pois käytöstä ennen ajan valitsemista
    ui->BtnSTART->setDisabled(true);
}

void MainWindow::on_BtnSwichPlayer2_clicked()
{
    //vaihdetaan pelaaaja2-->pelajaa1
    currentPlayer=1;
    setGameInfoText("Game ongoing. Player 1 turn!",16);
}

void MainWindow::on_BtnSwichPlayer1_clicked()
{
    //vaihdetaan pelaaaja1-->pelajaa2
    currentPlayer=2;
    setGameInfoText("Game ongoing. Player 2 turn!",16);
}

void MainWindow::updateProgressBar()
{
    //updateProgressBar:n arvojen asettaminen..
    ui->BarPlayer1->setValue(player1Time);
    ui->Barplayer2->setValue(player2Time);

    //kun jomman kumman pelaajan aika loppuu..
    if (player1Time==0){
        pQTimer->stop();
        ui->labelGameText->setText("Game over! Player 2 won!!!");
    }
    if (player2Time==0){
        pQTimer->stop();
        ui->labelGameText->setText("Game over! Player 1 won!!!");
    }
}

void MainWindow::setGameInfoText(QString text, short fontSize)
{
    QFont font;
    font.setPointSize(fontSize);

    ui->labelGameText->setText(text);
}
