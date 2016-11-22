#include <iostream>
#include "complex.h"
using namespace std;

int main() {
	complex first(2, 2);
	complex second(2, 3);
	cout << first << second;
	cout << "Wczytaj do pierwszej liczby swoje wartoœci: ";
	cin >> first;
	cout << "\noto co sie stalo: " << first;

	cout << "\nDODAWANIE: \n";
	first += second;

	cout << first << "\nODEJMOWANIE: ";
	first -= second;

	cout << first << "\nMNOZENIE PRZEZ STALA: ";
	int d;
	cin >> d;
	first *= d;

	cout << first << "\nMNOZENIE PRZEZ OBIEKT";
	first *= second;

	cout << first << "\nPREINKREMENTACJA";
	cout << ++first;

	cout << "\nPOSTINKREMENTACJA";
	cout << first++;

	cout << "\nPOTEGA: ";
	cin >> d;
	first ^= d;
	cout << first;
	system("pause");
	return 0;
}

