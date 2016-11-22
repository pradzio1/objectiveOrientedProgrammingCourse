#pragma once
#include <iostream>
using namespace std;	

class matrix {
	friend void input(matrix &);
	friend void output(matrix &);
	double ** table;
	int m, n;
public:
	matrix operator + (matrix &);
	matrix operator - (matrix &);
	matrix operator * (matrix &);
	matrix operator ^ (matrix &);
	matrix& operator = (matrix &);
	double det();
	matrix trans();
	matrix();
	matrix(matrix &);
	matrix(int, int);
	~matrix();
};