//
// Created by Radosław Pieja on 12/6/16.
//

#ifndef LAB_MANAGER_H
#define LAB_MANAGER_H


#include "Person.h"

class Manager : public Person{
    string property;
public:
    Manager();
    Manager(string, string, string, string);
    Manager(const Manager &);
    ~Manager();
    int GetSalary();
    //string GetProperty();
    //void PrintItSpecialist();
    virtual void Print();
    virtual void InputData();

};


#endif //LAB_MANAGER_H
