#pragma once
#include <iostream>
#include <string>
using namespace std;
class Movie {
	string title, director;
	int year;
	void printMovieInfo();
public:
	string getTitle();
	string getDirector();
	int getYear();
	Movie();
	Movie(Movie &);
	Movie(string t="Tytul", string d="Rezyser", int y=0);
	~Movie();
};