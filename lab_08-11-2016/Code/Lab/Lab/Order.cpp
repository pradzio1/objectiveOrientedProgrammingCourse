#include <iostream>
#include "Order.h"
using namespace std;
int Order::nextId = 0;
Order::Order():id(nextId), limit(15){
	nextId++;
	bookList = new Book [limit];
	for (int szt = 0; szt < limit; szt++) bookList[szt] = Book();
}
Order::Order(const Order &copyCandidate) :limit(copyCandidate.limit), id(copyCandidate.id) {
	bookList = new Book[limit];
	for (int szt = 0; szt < limit; szt++) bookList[szt] = copyCandidate.bookList[szt];
}
Order::Order(int lim):limit(lim), id(nextId){
	bookList = new Book[limit];
	nextId++;
	for (int szt = 0; szt < limit; szt++) bookList[szt] = Book();
}
Order::Order(Book *newBook, int lim) : id(nextId), limit(lim) {
	nextId++;
	bookList = newBook;
}
Order::~Order(){
//	cout << "shit happens";
	for (int szt = 0; szt < limit; szt++) printBookInfo(bookList[szt]);
	delete[] bookList;
}
void Order::setPrice(int whichOne) {
	if (whichOne < limit) bookList[whichOne].price = (float(rand() % 4001) + 1000)*0.01;
	else cout << "Merror book not found";
}
float Order::totalCost() {
	float totalCost = 0;
	for (int szt = 0; szt < limit; szt++) totalCost += bookList[szt].price;
	return totalCost;
}
void Order::howManyBooks() {
	cout << Book::counter;
}