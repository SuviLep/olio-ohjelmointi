#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef kokki("Gordon Ramsey");
    kokki.makeSalad();
    kokki.makeSoup();


    ItalianChef kokki2("Anthony Bourdain");
    kokki2.makePasta();

    return 0;
}
