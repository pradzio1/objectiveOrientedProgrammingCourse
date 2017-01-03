//
// Created by Radosław Pieja on 12/20/16.
//

#ifndef LAB_PERSON_H
#define LAB_PERSON_H

#include <iostream>
#include <string>

using namespace std;

class Person {
protected:
    static int id;
    int iid;
    string name, surname, position;
    double salary;
public:
    virtual string getName() = 0;
    virtual string getSurname() = 0;
    virtual int getID() = 0;
    virtual double getSalary() = 0;

};


#endif //LAB_PERSON_H
