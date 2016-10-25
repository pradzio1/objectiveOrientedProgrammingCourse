#include <iostream>
#include "Movie.h"
using namespace std;
void Movie::printMovieInfo() {
	cout << "Tytul filmu: " << title << "\tRezyser: " << director << "\tRok wydania: " << year;
}
string Movie::getDirector() {
	return director;
}
string Movie::getTitle() {
	return title;
}
int Movie::getYear() {
	return year;
}
Movie::Movie() {
	title = "Tytul";
	director = "Rezyser";
	year = 0;
}
Movie::Movie(string t, string d, int y) {
	title = t;
	director = d;
	year = y;
}
Movie::Movie(Movie &copyCandidate) {
	title = copyCandidate.title;
	director = copyCandidate.director;
	year = copyCandidate.year;
}
Movie::~Movie() {}