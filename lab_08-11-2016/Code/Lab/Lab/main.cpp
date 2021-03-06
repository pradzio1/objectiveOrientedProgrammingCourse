#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Order.h"
using namespace std;
void printBookInfo(Book &b) {
	cout << "Tytul: " << b.title << "\tAutor: " << b.author << "\tCena: "<<b.price<<"\t Licznik: "<<b.counter<<"\n";
}
int main() {
	int bookCount = 10;
	int orderCount = 10;
	for (int szt = 0; szt < orderCount; szt++) {
		Book *randBookList = new Book[bookCount];
		Order *firstOrder = new Order(randBookList, bookCount);
		for (int i = 0; i < bookCount; i++) {
			firstOrder->setPrice(i);
			printBookInfo(randBookList[i]);
		}
		delete[]randBookList;
		cout << "\n";
		firstOrder->howManyBooks();
		cout << "\n";
		delete firstOrder;
	}

	srand(time(NULL));
	system("pause");
	return 0;
}