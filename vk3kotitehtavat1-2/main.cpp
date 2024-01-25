#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki("Jyrki");
    kokki.makeSalad();
    kokki.makeSoup();


    ItalianChef kokki2("Mario");
    kokki2.makeSalad();
    kokki2.makeSoup();


    return 0;
}
