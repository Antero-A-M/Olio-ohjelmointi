#include "student.h"
#include <iostream>

Student::Student() : name(""), studentNumber(0), avarage(0.0) {}

void Student::setName(string n) {
    name = n;
}

void Student::setStudentNumber(int num) {
    studentNumber = num;
}

void Student::setAvarage(double avg) {
    avarage = avg;
}

string Student::getName() const {
    return name;
}

int Student::getStudentNumber() const {
    return studentNumber;
}

float Student::getAvarage() const {
    return avarage;
}
