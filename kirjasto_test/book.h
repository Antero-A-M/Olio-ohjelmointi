#ifndef BOOK_H
#define BOOK_H
#include <iostream>

using namespace std;




class Book
{

private:
    string title;
    string author;
    int publicationYear;
    bool isAvailable;


public:
    Book(string, string, int, bool);

    string getTitle() const;
    void setTitle(const string &newTitle);
    string getAuthor() const;
    void setAuthor(const string &newAuthor);
    int getPublicationYear() const;
    void setPublicationYear(int newPublicationYear);
    bool getIsAvailable() const;
    void setIsAvailable(bool newIsAvailable);

    void printDetails() const;

};

#endif // BOOK_H
