#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {

    cout<<"kerrostalo luotu"<<endl;

    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
    neljas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{

    double KulutustulosKerrostalo= eka.laskeKulutus(hinta)+ toka.laskeKulutus(hinta)+ kolmas.laskeKulutus(hinta)+neljas.laskeKulutus(hinta);

    cout<<" Kerrostalon kokonaiskulutus on " <<KulutustulosKerrostalo<< endl;

    return KulutustulosKerrostalo;
}
