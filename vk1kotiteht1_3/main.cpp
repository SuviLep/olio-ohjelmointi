#include <iostream>
#include <cstdlib>
#include <ctime>


int game(int maxnum) {
    std::srand(std::time(nullptr));

    int arvottuLuku = std::rand() % maxnum + 1;

    std::cout << "Tervetuloa arvauspeliin! Arvaa luku väliltä 1-" << maxnum << "." << std::endl;

    int pelaajanArvaus;
    int arvaustenMaara = 0;

    do {
        // Kysytään pelaajalta arvausta
        std::cout << "Syötä arvauksesi: ";
        std::cin >> pelaajanArvaus;

        // Tarkistetaan arvaus
        if (pelaajanArvaus < arvottuLuku) {
            std::cout << "Luku on suurempi." << std::endl;
        } else if (pelaajanArvaus > arvottuLuku) {
            std::cout << "Luku on pienempi." << std::endl;
        } else {
            std::cout << "Onneksi olkoon! Arvasit oikein." << std::endl;
        }

        // Lisätään arvaus laskuriin
        arvaustenMaara++;

    } while (pelaajanArvaus != arvottuLuku);

    // Palautetaan arvausten määrä
    return arvaustenMaara;
}


int main() {
    // Kutsu pelifunktiota ja saa arvausten määrä
    int game(int maxnum);

    int arvaustenMaara = game(40);

    // Tulosta arvausten määrä
    std::cout << "Pelissä tarvittiin " << arvaustenMaara << " arvausta." << std::endl;

    return 0;
}

