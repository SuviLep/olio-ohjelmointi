#include <iostream>
#include <cstdlib>
#include <ctime>


  int main(){

        // Alustetaan satunnaislukugeneraattori
        std::srand(std::time(nullptr));

        // Arvotaan satunnainen luku väliltä 1-20 käyttäen modulo-operaatiota
        int arvottuLuku = std::rand() % 20 + 1;

        std::cout << "Tervetuloa arvauspeliin! Arvaa luku väliltä 1-20." << std::endl;

        int pelaajanArvaus;

        do {
            // Kysytään  pelaajalta arvausta
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

        } while (pelaajanArvaus != arvottuLuku);

        return 0;
    }
