#include "Book.h"
class Order
{
	const int limit;
	int id;
	static int nextId;
	Book *bookList;
public:
	Order();
	Order(int );
	Order(Book *, int);
	Order(const Order &);
	~Order();

	inline int howManyBooks();
	float totalCost();
	void setPrice(int);
};
