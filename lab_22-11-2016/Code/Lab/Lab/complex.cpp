#include <iostream>
#include "complex.h"
using namespace std;
complex::complex() {
	real = 1;
	imaginary = 1;
}
complex::complex(complex &copyCandidate) {
	real = copyCandidate.real;
	imaginary = copyCandidate.imaginary;
}
complex::complex(double r, double i) {
	real = r;
	imaginary = i;
}
complex complex::operator += (const complex & obj) {
	real = this->real + obj.real;
	imaginary = this->imaginary + obj.imaginary;
	return *this;
}
complex complex::operator -= (const complex & obj) {
	complex result;
	result.real = this->real - obj.real;
	result.imaginary = this->imaginary - obj.imaginary;
	return result;
}
complex& complex::operator ++ () {	//prefix
	this->real = real + 1;
	return *this;
}
complex complex::operator ++(int) {		//postfix
	complex result(*this);
	result.imaginary +=1;
	return result;
}
complex complex::operator *= (const double &d) {
	this->real *= d;
	this->imaginary *= d;
	return *this;
}
complex complex::operator *= (const complex &obj) {
	this->real = ((obj.real*this->real) - (imaginary*obj.imaginary));
	this->imaginary = ((real*obj.imaginary) + (imaginary*obj.real));
	return *this;
}
complex complex::operator ^= (const unsigned int &d) {
	for (int i = 0; i < d; i++) {
		this->real *= this->real;
		this->imaginary *= this->real;
	}
	return *this;
}
ostream& operator << (ostream &out, const complex &obj) {
	cout << "[ "<< obj.real << " + " << obj.imaginary << " i ]\n";
	return out;
}
istream& operator >> (istream &in, complex &obj) {
	in >> obj.real;
	in >> obj.imaginary;
	return in;
}
