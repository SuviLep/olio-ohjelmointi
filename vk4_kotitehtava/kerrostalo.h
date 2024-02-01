#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "asunto.h"
#include "katutaso.h"
#include "kerros.h"


class Kerrostalo
{
public:
    Kerrostalo();
//as1+as2
    Katutaso eka;

    Kerros toka;
    Kerros kolmas;
    Kerros neljas;

    double laskeKulutus(double hinta);

};

#endif // KERROSTALO_H
