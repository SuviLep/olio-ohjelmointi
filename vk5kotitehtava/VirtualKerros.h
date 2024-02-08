#ifndef IKERROS_H
#define IKERROS_H

//Virtuaalinen luokka Virtualkerros
//Periytyy sekä katutasoon että kerrokseen.

class VirtualKerros
{
public:
    virtual void maaritaAsunnot() = 0;
    virtual double laskeKulutus(double hinta) = 0;
};

#endif // IKERROS_H
