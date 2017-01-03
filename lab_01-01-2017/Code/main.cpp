#include <iostream>
#include "Student.h"
#include "MyException.h"
using namespace std;
int main() {


    Student *a;
    int z;
    cout << "Podaj ilosc studentow: ";
    cin >> z;
    cin.ignore();
    a=new Student[z];
    for(int i=0;i<z;++i) {


        try {
            a[i].setStudent();
        }
        catch (MyException x) {
            if (x.what() == 1)
                cerr << "Blad zla nazwa";
            else if (x.what() == 2)
                cerr << "Blad zly rok";
            else if (x.what() == 3)
                cerr << "Blad zla ocena";
            else if (x.what() == 4)
                cerr << "Unknown exception";
        }


    }
    return 0;
}