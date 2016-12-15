//
// Created by Radosław Pieja on 12/5/16.
//

#ifndef LAB1_MANAGER_H
#define LAB1_MANAGER_H

#include "Employee.h"

class Manager : public Employee{
    string property;
public:
    Manager();
    Manager(string, string, string, string);
    Manager(const Manager &);
    ~Manager();
    int GetSalary();
    string GetProperty();
    void PrintManager();
};


#endif //LAB1_MANAGER_H
