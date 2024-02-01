#include "katutaso.h"

Katutaso::Katutaso() {

    cout << "katutaso luotu johon edeltvt 2 asuntoa listty"<<endl;
    cout <<"Maaritetaan 2 kappaletta katutason asuntoja."<<endl;

}
void Katutaso::maaritaAsunnot()
{
    as1.maarita(2,100);
    as2.maarita(3,150);
}
double Katutaso:: laskeKulutus(double hinta){

    double kulutustulosKT;
    kulutustulosKT = as1.laskeKulutus(hinta)+ as2.laskeKulutus(hinta);


    cout<<"Kulutustulos katutasossa on "<< kulutustulosKT<< endl;
    return kulutustulosKT;
}
