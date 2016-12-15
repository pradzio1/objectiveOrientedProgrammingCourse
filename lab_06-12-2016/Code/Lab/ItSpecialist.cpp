//
// Created by Radosław Pieja on 12/6/16.
//

#include "ItSpecialist.h"
#include <iostream>
ItSpecialist::ItSpecialist() {
    property="Informatyk";
    cout << "Konstruktor domyslny informatyka\t";
}
ItSpecialist::ItSpecialist(string nm, string srn, string pos, string prop):Person(nm, srn, pos){
    property=prop;
    cout << "Konstruktor param informatyka\t";
}
ItSpecialist::ItSpecialist(const ItSpecialist &copy):Person(copy) {
    property=copy.property;
    cout << "Konstruktor kopia informatyka\t";
}
ItSpecialist::~ItSpecialist(){
    cout << "Destruktor informatyka";
}
int ItSpecialist::GetSalary() {
    double helper;
    helper=3.5*salary;
    return (int)helper;
}
void ItSpecialist::Print(){
    cout << name << " "<<surname<< " Placa: "<<GetSalary()<< " "<<property<<" "<<position<<"\n";

}
void ItSpecialist::InputData() {
    cin >> name >> surname >> property >> position;
}



/*string ItSpecialist::GetProperty() {return property;}
void ItSpecialist::PrintItSpecialist(){
    Print();
    cout << "Specjalnosc: " << GetProperty() << "\tStawka: "<<GetSalary()<<"\n";
}*/