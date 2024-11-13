#include "book.h"

Book::Book(string t, string a, int y, bool i)
{
    title = t;
    author = a;
    publicationYear = y;
    isAvailable = i;

}

string Book::getTitle() const
{
    return title;
}

void Book::setTitle(const string &newTitle)
{
    title = newTitle;
}

string Book::getAuthor() const
{
    return author;
}

void Book::setAuthor(const string &newAuthor)
{
    author = newAuthor;
}

int Book::getPublicationYear() const
{
    return publicationYear;
}

void Book::setPublicationYear(int newPublicationYear)
{
    publicationYear = newPublicationYear;
}

bool Book::getIsAvailable() const
{
    return isAvailable;
}

void Book::setIsAvailable(bool newIsAvailable)
{
    isAvailable = newIsAvailable;
}

void Book::printDetails() const
{
    cout << "Kirjan nimi: " << title << endl;
    cout << "Kirjailija: " << author<< endl;
    cout << "Vuosi: " << publicationYear<<endl;
    cout << "Onko kirja vapaana: " << (isAvailable ? "Kylla" : "Ei") << endl;



}


