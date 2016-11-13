#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Order.h"
using namespace std;
int Order::orderCount = 0;
//Order::Order():limit(10){
//	orderCount++;
//	id = orderCount;
//	bookList = new Book [limit];
//}
Order::Order(const Order &copyCandidate) :limit(copyCandidate.limit) {
	orderCount++;
	id = copyCandidate.id;
	bookList = copyCandidate.bookList;
}
Order::Order(int lim):limit(lim){
	bookList = new Book[limit];
	orderCount++;
}
Order::~Order(){
cout << 
}
string Order::getBookAuthor(Book &k) {
	return k.author;
}
string Order::getBookTitle(Book &k) {
	return k.title;
}
float Order::getBookPrice(Book &k) {
	return k.price;
}