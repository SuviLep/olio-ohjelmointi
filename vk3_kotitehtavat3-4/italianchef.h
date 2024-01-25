#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <string>

class ItalianChef:public Chef
{
public:
    ItalianChef(string s);
    string getName();
    void makePasta();

    //Destruktorin esittely
    ~ItalianChef();
};


#endif // ITALIANCHEF_H
