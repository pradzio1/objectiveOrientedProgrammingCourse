//
// Created by Radosław Pieja on 12/6/16.
//

#include "Manager.h"
#include <iostream>
Manager::Manager() {
    property="Kierownik";
    cout << "Konstruktor domyslny kierownika\t";
}
Manager::Manager(string nm, string srn, string pos, string prop):Person(nm, srn, pos){
    property=prop;
    cout << "Konstruktor param kierownika\t";
}
Manager::Manager(const Manager &copy):Person(copy) {
    property=copy.property;
    cout << "Konstruktor kopia kierownika\t";
}
Manager::~Manager(){
    cout << "Destruktor kierownika";
}
int Manager::GetSalary() {
    double helper;
    helper=5.0*salary;
    return (int)helper;
}
void Manager::Print(){
    cout << name << " "<<surname<< " Placa: "<<GetSalary()<< " "<<property<<" "<<position<<"\n";

}
void Manager::InputData() {
    cin >> name >> surname >> property >> position;

}