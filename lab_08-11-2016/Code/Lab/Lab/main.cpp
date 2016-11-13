#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Order.h"
using namespace std;
void printBookInfo(Book &k) {
	cout << "Tytul: " << k.title << "\tAutor: " << k.author << "\tCena: "<<k.price<<"\t Licznik: "<<k.counter<<"\n";
}
int main() {
	Order x(120);
	for (int i = 0; i < 120; i++) {
		printBookInfo(x.bookList[i]);
	}
	delete x;

	srand(time(NULL));
	system("pause");
	return 0;
}