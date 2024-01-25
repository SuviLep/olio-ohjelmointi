#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


///konstruktori
game::game(int) {
    std::cout << "Tervetuloa arvauspeliin maksimi arvottunumero on 10"<< std::endl;
}

game::~game()
{
    std::cout << "Valimuisti tyhjennetty." << std::endl;
}

void game::play()
//Play metodi tulostaa peliä pelattaessa mille välille
//arvaus pitää antaa, sekä arvauksen jälkeen osuiko vaiko eikö.
{
    std::srand(std::time(nullptr));

    randomNumber = std::rand() % 10;

    while(randomNumber!=PlayerGuess){

 // Kysytään pelaajalta arvausta
    std::cout << "Syota numero arvaukseksi valille 1-10: " << std::endl;
    std::cin >> PlayerGuess;

 // Tarkistetaan arvaus
    if (PlayerGuess < randomNumber) {
        std::cout << "Luku on suurempi." << std::endl;
    } else if (PlayerGuess > randomNumber) {
        std::cout << "Luku on pienempi." << std::endl;
    }

    // Lisätään arvaus laskuriin
    numOfGuesses++;
}
    printGameResult();
}
void game::printGameResult()

// printGameResult metodi tulostaa yhteenvedon eli mikä oli oikea vastaus ja
//kuinka monta arvausta siihen tarviitiin (vihje: play metodin täytyy kutsua
//printGameResult metodia)
{
    if (PlayerGuess == randomNumber){
        std::cout <<"Hienoa, luku oli oikein" << std::endl;
     // Tulosta arvausten määrä
        std::cout << "Pelissa tarvittiin " << numOfGuesses << " arvausta." << std::endl;
    }
}
