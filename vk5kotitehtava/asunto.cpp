
#include "asunto.h"
#include <iostream>

using namespace std;

Asunto::Asunto() {
    cout << "Asunto luotu " << endl;
}

void Asunto::maarita(int a, int n) {
    asukasmaara = a;
    neliot = n;
    cout << "Asunto maaritetty asukkaita = " << asukasmaara << " nelioita = " << neliot << endl;
}

double Asunto::laskeKulutus(double hinta) {
    double kulutus = hinta * asukasmaara * neliot;
    cout << "Asunnon kulutus, kun hinta = " << hinta << " on " << kulutus << endl;
    return kulutus;
}
