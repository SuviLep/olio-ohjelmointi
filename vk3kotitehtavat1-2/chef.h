#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{
public:
    Chef(string);
    void makeSalad(void);
    void makeSoup();
    void makePasta();
    //destruktorin esittely;
    ~Chef();

protected:
    string name;
};



#endif // CHEF_H
