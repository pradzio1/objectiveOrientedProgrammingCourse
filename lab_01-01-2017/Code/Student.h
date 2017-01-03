//
// Created by Radosław Pieja on 1/3/17.
//

#ifndef CODE_SUDENT_H
#define CODE_SUDENT_H

#include <iostream>
using namespace std;

class Student {
protected:
    string name, surname, fac;
    int year;
    double grade;
public:
    Student();
    void setStudent();
    void printStudent();
    bool validate();
};


#endif //CODE_SUDENT_H
