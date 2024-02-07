#include "katutaso.h"

Katutaso::Katutaso() {

    cout << "***katutaso luotu johon edeltavat 2 asuntoa lisatty"<<endl;


}
void Katutaso::maaritaAsunnot()
{
    cout<< "Maaritellaan kerros"<<endl;
    as1.maarita(2,100);
    as2.maarita(3,150);
}
double Katutaso:: laskeKulutus(double hinta){

    double kulutustulosKT;
    kulutustulosKT = as1.laskeKulutus(hinta)+ as2.laskeKulutus(hinta);


    cout<<"Kulutustulos katutasossa on "<< kulutustulosKT<< endl;
    return kulutustulosKT;
}
