#include "kerros.h"

Kerros::Kerros() {
    cout << "()()()()Kerros luotu "<<endl;

}

Kerros::~Kerros() {
    cout << "----Kerros tuhottu"<<endl;

    delete as1;
    as1=nullptr;
    delete as2;
    as2=nullptr;
    delete as3;
    as3= nullptr;
    delete as4;
    as4= nullptr;
}

void Kerros::maaritaAsunnot() {
    cout << "Maaritetaan asuntoja kerrokseen (4kpl)"<<endl;

    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();

    as1->maarita(2, 100);
    as2->maarita(3, 150);
    as3->maarita(4, 200);
    as4->maarita(5, 250);
}

double Kerros::laskeKulutus(double hinta) {
    double kulutustulosKrs = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta) + as3->laskeKulutus(hinta) + as4->laskeKulutus(hinta);
    cout << "****Kerroksen kulutus on " << kulutustulosKrs << endl;
    return kulutustulosKrs;
}
