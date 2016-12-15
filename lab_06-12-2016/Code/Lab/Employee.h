//
// Created by Radosław Pieja on 12/6/16.
//

#ifndef LAB_EMPLOYEE_H
#define LAB_EMPLOYEE_H


#include "Person.h"

class Employee: public Person {
    string property;
public:
    Employee();
    Employee(string, string, string, string);
    Employee(const Employee &);
    ~Employee();
    int GetSalary();
    //string GetProperty();
    //void PrintItSpecialist();
    virtual void Print();
    virtual void InputData();
};


#endif //LAB_EMPLOYEE_H
