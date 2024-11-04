#include <iostream>
#include "laskeminen.h"


// Funktiot

//Vaihe 2.
void calcSum (int a, int b) {

    cout <<"\nVaihe 2.\nLukujen summa on: " << a + b << endl;

}

void calcDiv (int a, int b) {

    if (b == 0) {
        cout << "Virhe, jakaja on 0" << endl;
    }
    else {
        printf("Lukujen osamaara on: %.2f\n", static_cast<float>(a) / b);
    }

}

// Vaihe 3.
int retSum (int a, int b) {

    int summa = a + b;
    return summa;

}

float retDiv (int a, int b) {

    if (b == 0) {
        cout << "Virhe, Jakaja on 0" << endl;
        return 0;
    }
    else {
        float osamaara = static_cast<float>(a) / b;
        return osamaara;
    }
}
