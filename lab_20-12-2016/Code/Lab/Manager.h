//
// Created by Radosław Pieja on 12/20/16.
//

#ifndef LAB_MANAGER_H
#define LAB_MANAGER_H

#include "Person.h"

class Manager : public Person {
public:
    Manager();
    Manager(double);
    ~Manager();
    virtual string getName() override;
    virtual string getSurname() override;
    virtual int getID() override;
    virtual double getSalary() override;
};


#endif //LAB_MANAGER_H
