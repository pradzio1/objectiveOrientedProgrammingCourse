//
// Created by Radosław Pieja on 12/6/16.
//

#ifndef LAB_PERSON_H
#define LAB_PERSON_H

#include <string>

using namespace std;

class Person {
protected:
    static int ID;
    int iID;
    string name, surname, position;
    static const int salary;
public:
    Person();
    Person(string, string, string);
    Person(const Person &);
    virtual ~Person();
    virtual void Print(){};
    virtual void InputData(){};
};


#endif //LAB_PERSON_H
