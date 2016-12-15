//
// Created by Radosław Pieja on 12/5/16.
//

#ifndef LAB1_EMPLOYEE_H
#define LAB1_EMPLOYEE_H

#include <string>

using namespace std;

class Employee {
public:
    friend class Manager;
    friend class ItSpecialist;
private:
    int iID;
    static int ID;
    string name, surname, position;
    static const int salary;
public:
    Employee();
    Employee(string, string, string);
    Employee(const Employee &);
    ~Employee();
    string GetName();
    string GetPosition();
    void PrintEmployee();
    void Print();
};


#endif //LAB1_EMPLOYEE_H
