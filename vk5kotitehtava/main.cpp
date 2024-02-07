#include "kerrostalo.h"

using namespace std;

int main()
{
    Kerrostalo* KT = new Kerrostalo();
    // Varataan Kerrostalo heapista

    KT->laskeKulutus(1);

    delete KT;
    KT= nullptr;
    // Vapautetaan varattu muisti

    return 0;
}


