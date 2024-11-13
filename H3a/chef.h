#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;


class Chef
{
protected:
    string name;

public:
    Chef(string);
    void makeSalad();
    void makeSoup();

    string getName() const;
    void setName(const string &newName);

    ~Chef();
};

#endif // CHEF_H
