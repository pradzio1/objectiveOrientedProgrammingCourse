//
// Created by Radosław Pieja on 12/6/16.
//

#include "Employee.h"
#include <iostream>
Employee::Employee() {
    property="Pracownik";
    cout << "Konstruktor domyslny pracownika\t";
}
Employee::Employee(string nm, string srn, string pos, string prop):Person(nm, srn, pos){
    property=prop;
    cout << "Konstruktor param pracownika\t";
}
Employee::Employee(const Employee &copy):Person(copy) {
    property=copy.property;
    cout << "Konstruktor kopia pracownika\t";
}
Employee::~Employee(){
    cout << "Destruktor pracownika";
}
int Employee::GetSalary() {
    return salary;
}
void Employee::Print(){
    cout << name << " "<<surname<< " Placa: "<<GetSalary()<< " "<<property<<"\n";
}
void Employee::InputData() {
    cin >> name >> surname >> property >> position;

}
