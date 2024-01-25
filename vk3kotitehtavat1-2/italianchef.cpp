#include "italianchef.h"

ItalianChef::ItalianChef(string s):Chef(s)
{
    // jos halutaan suorittaa Chef luokan alustus ennen tätä
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta"<<endl;
}
ItalianChef::~ItalianChef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}
