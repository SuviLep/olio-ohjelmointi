#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>

class ItalianChef:public Chef
{
public:
    ItalianChef(string, int, int);
    string getName();
    void makePasta();


    //Destruktorin esittely
    ~ItalianChef();

private:
    int jauhot;
    int vesi;



};


#endif // ITALIANCHEF_H
