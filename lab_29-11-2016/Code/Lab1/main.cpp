#include <iostream>
#include "Manager.h"
#include "ItSpecialist.h"
using namespace std;

int main() {
    Employee ex1;
    Employee *copy=new Employee(ex1);
    ex1.PrintEmployee();
    copy->PrintEmployee();
    ItSpecialist *ex2=new ItSpecialist();
    ItSpecialist *ex3=new ItSpecialist("Radek", "Pieja", "Programista", "Jest fajny");
    ex2->PrintItSpecialist();
    ex3->PrintItSpecialist();
    Manager *ex4=new Manager();
    ex4->PrintManager();
    delete(copy);
    delete(ex2);
    delete(ex3);
    delete(ex4);
    return 0;
}