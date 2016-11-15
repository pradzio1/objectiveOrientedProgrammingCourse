#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;
class Book {
	friend class Order;
	friend void printBookInfo(Book &k);
	string author, title;
	float price;
	static int counter;
public:
	Book();
	Book(Book &);
	Book(string tytul, string author, float price);
	~Book();
};
