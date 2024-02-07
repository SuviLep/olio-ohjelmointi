#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {
    cout << "()()()()Kerrostalo luotu" << endl;
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();


    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();

}

Kerrostalo::~Kerrostalo() {
    cout<<"----Kerrostalo tuhottu"<< endl;

    delete eka;
    eka= nullptr;

    delete toka;
    toka=nullptr;

    delete kolmas;
    kolmas=nullptr;

}

double Kerrostalo::laskeKulutus(double hinta) {
    double kokonaiskulutusKT = eka->laskeKulutus(hinta) + toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);
    cout << "****Kerrostalon kokonaiskulutus on " << kokonaiskulutusKT << endl;
    return kokonaiskulutusKT;
}
