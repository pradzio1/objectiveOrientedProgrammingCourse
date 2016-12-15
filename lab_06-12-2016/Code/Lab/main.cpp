#include <iostream>
#include "Manager.h"
#include "Employee.h"
#include "ItSpecialist.h"
int main() {
    Employee *prac1=new Employee();
    cout << endl;
    Person *pracmiesiaca;
    pracmiesiaca=prac1;
    pracmiesiaca->InputData();
    pracmiesiaca->Print();
    prac1->Print();
    ItSpecialist *prac2=new ItSpecialist();
    ItSpecialist *prac3=new ItSpecialist();
    prac3->InputData();
    prac2->Print();
    prac3->Print();
    Manager *prac4=new Manager();
    Manager *prac5=new Manager(*prac4);
    prac4->Print();
    prac5->Print();

    cout <<endl;


    int n=30;
    Person **zespol=new Person*[n]();
    zespol[0]=new Manager();
    for (int i=1;i<10;i++){
        zespol[i]=new ItSpecialist();
    }
    for(int i=10;i<29;i++){
        zespol[i]=new Employee();
    }

    for (int i=0;i<30;i++){
        zespol[i]->Print();
        cout << endl;
    }
    cout <<endl<<endl;
    for (int i=0;i<30;i++){
        delete zespol[i];
    }
    delete zespol;
    delete prac1;
    delete prac2;
    delete prac3;
    delete prac4;
    delete prac5;
    return 0;
}