//
// Created by Radosław Pieja on 12/5/16.
//

#include <iostream>

#include "Person.h"

int Person::ID=1;
const int Person::salary=10;
Person::Person() {
    iID=ID;
    ID++;
    name="Imie";
    surname="Nazwisko";
    position="Stanowisko";
    cout << "Konstruktor domyslny osoby\t";
}
Person::Person(string nm, string srn, string pos) {
    iID=ID;
    ID++;
    name=nm;
    surname=srn;
    position=pos;
    cout << "Konstruktor param osoby\t";
}
Person::Person(const Person &copy) {
    iID=copy.iID;
    name=copy.name;
    surname=copy.surname;
    position=copy.position;
    cout << "Konstruktor kopia osoby\t";
}
Person::~Person(){
    cout << "destruktor";
}