#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;


class Student
{
private:
    string name;
    int studentNumber;
    float avarage;

public:
    Student();
    void setName(string);
    void setStudentNumber(int);
    void setAvarage(double);
    string getName()  const;
    int getStudentNumber() const;
    float getAvarage() const;
};

#endif // STUDENT_H
