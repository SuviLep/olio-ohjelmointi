#include "kerros.h"

Kerros::Kerros() {

    cout << "Kerros luotu "<<endl;
}
void Kerros::maaritaAsunnot()
{
    as1.maarita(2,100);
    as2.maarita(3,150);
    as3.maarita(4,200);
    as4.maarita(5,250);
}
double Kerros::laskeKulutus(double hinta)
{

    double KulutustulosKRS= as1.laskeKulutus(hinta)+as2.laskeKulutus(hinta)+as3.laskeKulutus(hinta)+as4.laskeKulutus(hinta);

    cout<<" Kerroksen kulutus on " <<KulutustulosKRS<< endl;

    return KulutustulosKRS;
}
