#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{

    // Chef 1.

    // Chef objChef("Gordon Ramsay");
    // objChef.makeSalad();
    // objChef.makeSoup();


    // Chef 2.

    ItalianChef objItalianChef("Anthony Bourdain");
    objItalianChef.makeSalad();
    objItalianChef.makeSoup();
    objItalianChef.makePasta();
    cout << "name of the ItalianChef is " << objItalianChef.getName() << endl;

    return 0;
}
