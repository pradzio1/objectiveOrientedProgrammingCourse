#include <iostream>
#include <string>
#include "student.h"
using namespace std;
int student::count= 0;
void student::getStudentInfo() {
	cout << "Imie: " << name << "\nNazwisko: " << surname << "\nKierunek: " << fieldOfStudy << "\nRok: " << year<<"\niid: "<<iid << "\nlicznik: " << count<<"\n\n";
}
void student::setStudentInfo() {
	cout << "\nPodaj imie studenta: ";
	getline(cin, name);
	cout << "\nPodaj nazwisko studenta: ";
	getline(cin, surname);
	cout << "\nPodaj kierunek studenta: ";
	getline(cin, fieldOfStudy);
	cout << "\nPodaj rok studiow: ";
	cin >> year;
	cin.ignore();
}
student::student() {
	name = "Jan";
	surname = "Kowalski";
	fieldOfStudy = "Informatyka Stosowana";
	year = 1;
	count++;
	iid = count;
}