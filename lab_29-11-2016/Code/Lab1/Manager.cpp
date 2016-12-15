//
// Created by Radosław Pieja on 12/5/16.
//

#include "Manager.h"
#include <iostream>
Manager::Manager() {
    property="Specjalnosc";
    cout << "Konstruktor domyslny kierownika\t";
}
Manager::Manager(string nm, string srn, string pos, string prop):Employee(nm, srn, pos){
    property=prop;
    cout << "Konstruktor param kierownika\t";
}
Manager::Manager(const Manager &copy):Employee(copy) {
    property=copy.property;
    cout << "Konstruktor kopia kierownika\t";
}
Manager::~Manager(){
    cout << "Destruktor kierownika";
}
int Manager::GetSalary() { return salary*5; }
string Manager::GetProperty() {return property;}
void Manager::PrintManager(){
    Print();
    cout << "Specjalnosc: " << GetProperty() << "\tStawka: "<<GetSalary()<<"\n";
}