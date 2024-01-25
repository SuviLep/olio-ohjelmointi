#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef:public Chef
{
public:
    ItalianChef(string s);
    string getName();

    // Miksi tässä void, ei palauta mitään??///
    void makePasta();
    //Destruktorin esittely
    ~ItalianChef();
};


#endif // ITALIANCHEF_H
