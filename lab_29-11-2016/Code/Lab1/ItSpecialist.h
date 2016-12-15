//
// Created by Radosław Pieja on 12/5/16.
//

#ifndef LAB1_ITSPECIALIST_H
#define LAB1_ITSPECIALIST_H


#include "Employee.h"

class ItSpecialist : public Employee{
    string property;
public:
    ItSpecialist();
    ItSpecialist(string, string, string, string);
    ItSpecialist(const ItSpecialist &);
    ~ItSpecialist();
    int GetSalary();
    string GetProperty();
    void PrintItSpecialist();
};


#endif //LAB1_ITSPECIALIST_H
