#include "book.h"

#include <iostream>
#include <vector>


using namespace std;

int main()
{

    vector<Book> bookList;
    Book objBook_1=Book ("Kiva Kirja","Antero",2035,false);
    Book objBook_2=Book ("Kiva Kirja II","Antero",2040,true);
    Book objBook_3=Book ("Kiva Kirja III","Antero",2048,false);


    bookList.push_back(objBook_1);
    bookList.push_back(objBook_2);
    bookList.push_back(objBook_3);


    bookList[0].printDetails();
    cout <<"\n";

    for (int i=0; i<=2;i++) {
        bookList[i].printDetails();

    }

    return 0;
}
