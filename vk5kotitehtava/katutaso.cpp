#include "katutaso.h"

Katutaso::Katutaso() {
    cout << "()()()()Katutaso luotu"<<endl;

}

Katutaso::~Katutaso()
{
    cout << "----Katutaso tuhottu" << endl;
    delete as1;
    as1 = nullptr;
    delete as2;
    as2 = nullptr;
}

void Katutaso::maaritaAsunnot() {
    cout<< "Maaritellaan katutason asunnot (2 kappaletta)"<<endl;

    as1 = new Asunto();
    as2 = new Asunto();

    as1->maarita(2, 100);
    as2->maarita(3, 150);
}

double Katutaso::laskeKulutus(double hinta) {
    double kulutustulosKT;
    kulutustulosKT = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta);
    cout<<"****Katutason kulutus on "<< kulutustulosKT<< endl;
    return kulutustulosKT;
}
