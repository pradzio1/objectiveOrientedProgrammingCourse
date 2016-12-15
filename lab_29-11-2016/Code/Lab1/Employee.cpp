//
// Created by Radosław Pieja on 12/5/16.
//

#include <iostream>

#include "Employee.h"

int Employee::ID=1;
const int Employee::salary=10;
Employee::Employee() {
    iID=ID;
    ID++;
    name="Imie";
    surname="Nazwisko";
    position="Stanowisko";
    cout << "Konstruktor domyslny pracownika\t";
}
Employee::Employee(string nm, string srn, string pos) {
    iID=ID;
    ID++;
    name=nm;
    surname=srn;
    position=pos;
    cout << "Konstruktor param pracownika\t";
}
Employee::Employee(const Employee &copy) {
    iID=ID;
    ID++;
    name=copy.name;
    surname=copy.surname;
    position=copy.position;
    cout << "Konstruktor kopia pracownika\t";
}
Employee::~Employee() {
    cout << "Destruktor pracownika";
}
string Employee::GetName() {return this->name+" "+this->surname;}
string Employee::GetPosition() {return this->position;}
void Employee::PrintEmployee(){
    cout << "\nImie i nazwisko: "<<GetName()<<"\tStanowisko: "<<GetPosition()<<"\tStawka: "<<salary <<"\n";
}
void Employee::Print(){
    cout << "\nImie i nazwisko: "<<GetName()<<"\tStanowisko: "<<GetPosition()<<"\t";
}