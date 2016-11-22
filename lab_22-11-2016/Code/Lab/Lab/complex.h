#pragma once
using namespace std;
class complex {
	double real, imaginary;
public:
	complex();
	complex(complex &);
	complex(double, double);
	complex operator += (const complex &);//done
	complex operator -= (const complex &);//done
	complex operator *= (const double &);//done
	complex operator *= (const complex &);//done
	complex operator ^= (const unsigned int &);//done
	complex operator ++ (int);//done
	complex& operator ++ ();//done
	friend ostream& operator << (ostream &out, const complex &);
	friend istream& operator >> (istream &in, complex &);
};