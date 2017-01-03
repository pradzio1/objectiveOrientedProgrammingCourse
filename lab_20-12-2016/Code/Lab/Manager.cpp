//
// Created by Radosław Pieja on 12/20/16.
//

#include "Manager.h"

Manager::Manager() {
    salary*=3.5;
    position="Kierownik";
}
Manager::Manager(double salaryMultiplier) {
    salary*=salaryMultiplier;
    position="Kierownik";
}
Manager::~Manager() {}
virtual double Manager::getSalary() {
    return salary;
}