#include "Book.h"
int Book::counter = 0;
Book::Book() {
	title = "Tytul";
	author = "Autor";
	counter++;
	price = 10.00;
}
Book::Book(string t, string a, float p) {
	title = t;
	author = a;
	price = p;
	counter++;
}
Book::Book(Book &copyCandidate) {
	title = copyCandidate.title;
	author = copyCandidate.author;
	price = copyCandidate.price;
	counter++;
}
Book::~Book() {
	counter--;
}