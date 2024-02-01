#include <iostream>
#include "asunto.h"
#include "katutaso.h"

using namespace std;

int main()
{


   // Asunto olio;
    //olio.maarita(2,100);
    //olio.laskeKulutus(1);

    Katutaso katutaso;
   katutaso.maaritaAsunnot();
   katutaso.laskeKulutus(1);

   Kerros Kerros;
   Kerros.maaritaAsunnot();
   Kerros.laskeKulutus(1);


    return 0;
}
