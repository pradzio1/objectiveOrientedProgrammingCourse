#pragma once
#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

class Client
{
public:
	Client();
	Client(string n="Name", string s="Surname", int lim=10, Movie *mL=NULL);
	Client(const Client &);
	~Client();

private:
	const int limit;
	static int maxID;
	static int clientCount;
	string name, surname;
	int iid;
	Movie *movieList=NULL;
};
