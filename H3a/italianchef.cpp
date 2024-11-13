#include "italianchef.h"



ItalianChef::ItalianChef(string n) : Chef(n)
{

    cout << "ItalianChef " << getName() << " konstruktori" << endl;
}

string ItalianChef::getName()
{
    return name;
}

void ItalianChef::makePasta()
{
    cout << "ItalianChef " << getName() << " makes pasta" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << getName() << " destruktori" << endl;
}
