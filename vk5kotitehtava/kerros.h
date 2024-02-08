
#ifndef KERROS_H
#define KERROS_H

#include "VirtualKerros.h"
#include "asunto.h"


class Kerros: public VirtualKerros
{
public:
    Kerros();
    virtual ~Kerros();
    virtual void maaritaAsunnot() override;
    virtual double laskeKulutus(double hinta) override;

private:
    Asunto *as1;
    Asunto *as2;
    Asunto *as3;
    Asunto *as4;
};

#endif // KERROS_H

