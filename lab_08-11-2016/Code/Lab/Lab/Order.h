#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include "Book.h"
using namespace std;

class Order
{
	const int limit;
	static int orderCount;
	int id;
public:
	Book *bookList = NULL;
	Order(int lim=15);
	Order(const Order &);
	~Order();
	string getBookAuthor(Book &k);
	string getBookTitle(Book &k);
	float getBookPrice(Book &k);
};
