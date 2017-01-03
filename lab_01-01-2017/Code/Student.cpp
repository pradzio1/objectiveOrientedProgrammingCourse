//
// Created by Radosław Pieja on 1/3/17.
//

#include "Student.h"
#include "MyException.h"

Student::Student (){
    name=surname=fac="";
    year=0;
    grade=0.0;
}
void Student::setStudent() {
    string n, s, f;
    int y;
    double g;
    cout << "Podaj imie studenta: ";
    getline(cin, n);
    for (int i = 0; i<n.size();++i){
        if(!isalpha(n[i])&&n[i]!=' ')
            throw MyException(1);
    }
    name=n;

    cout << "Podaj nazwisko studenta: ";
    getline(cin, s);
    for (int i = 0; i<s.size();++i){
        if(!isalpha(s[i])&&s[i]!=' '&&s[i]!='-')
            throw MyException(1);
    }
    surname=s;

    cout << "Podaj kierunek: ";
    getline(cin, f);
    for (int i = 0; i<f.size();++i){
        if(!isalpha(f[i])&&f[i]!=' '&&f[i]!='-')
            throw MyException(1);
    }
    fac=f;

    cout << "Podaj rok: ";
    cin >> y;
    if(!isdigit(y)&&(y<1||y>5))
        throw MyException(2);
    year=y;


    cout << "Podaj ocene: ";
    cin >> g;
    if(g!=2.0&&g!=3.0&&g!=3.5&&g!=4.0&&g!=4.5&&g!=5.0)
        throw MyException(3);
    grade=g;
    cin.ignore();

    if(!validate())
        setStudent();

}
void Student::printStudent() {
    cout << name << "\t"<<surname << "\t"<<fac << "\t"<<year << "\t"<<grade << "\n";
}

