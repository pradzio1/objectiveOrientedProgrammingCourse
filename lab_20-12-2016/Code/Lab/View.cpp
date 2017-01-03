//
// Created by Radosław Pieja on 12/20/16.
//

#include "View.h"
#include <iostream>
using namespace std;

void View::Print(Person &displayedObject) {
    cout << " | "<<displayedObject.getID()<<" | "<< displayedObject.getName()<<" | "<<displayedObject.getSurname() << " | "<< displayedObject.getSalary() <<" |\n" ;
}