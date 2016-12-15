//
// Created by Radosław Pieja on 12/6/16.
//

#ifndef LAB_ITSPECIALIST_H
#define LAB_ITSPECIALIST_H


#include "Person.h"


class ItSpecialist : public Person{
    string property;
public:
    ItSpecialist();
    ItSpecialist(string, string, string, string);
    ItSpecialist(const ItSpecialist &);
    ~ItSpecialist();
    int GetSalary();
    //string GetProperty();
    //void PrintItSpecialist();
    virtual void Print();
    virtual void InputData();
};

#endif //LAB_ITSPECIALIST_H
