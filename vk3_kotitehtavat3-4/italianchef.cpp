#include "italianchef.h"

ItalianChef::ItalianChef(string s,int a, int b):Chef(s)
{
    // jos halutaan suorittaa Chef luokan alustus ennen tätä
    jauhot= a;
    vesi= b;
    name = s;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<getName()<<" tekee pastaa erikoisreseptilla "<<endl;
    cout<<"Chef "<<getName()<<" kayttaa jauhoja "<<jauhot<<endl;
    cout<<"Chef "<<getName()<<" kayttaa vetta "<<vesi<<endl;
}
ItalianChef::~ItalianChef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}
