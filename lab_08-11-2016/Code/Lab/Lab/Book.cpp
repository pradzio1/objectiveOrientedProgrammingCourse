#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Book.h"
using namespace std;
int Book::counter = 0;
Book::Book() {
	title = "Tytul";
	author = "Autor";
	counter++;
	priceBuilder = (rand())%100;
	price = priceBuilder;
	price *= 0.01;
	priceBuilder = (rand()%41)+10;
	price += priceBuilder;
}
Book::Book(string t, string d, float p) {
	title = t;
	author = d;
	price = p;
	counter++;
}
Book::Book(Book &copyCandidate) {
	title = copyCandidate.title;
	author = copyCandidate.author;
	counter++;
}
Book::~Book() {
	counter--;
}