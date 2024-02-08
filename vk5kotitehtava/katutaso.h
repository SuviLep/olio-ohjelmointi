#ifndef KATUTASO_H
#define KATUTASO_H
#include "asunto.h"
#include "kerros.h"
#include "VirtualKerros.h"



class Katutaso: public VirtualKerros
{
public:
    Katutaso();
    virtual ~Katutaso();
    virtual void maaritaAsunnot() override;
    virtual double laskeKulutus(double hinta) override;

private:
    Asunto*as1;
    Asunto*as2;
};

#endif // KATUTASO_H
