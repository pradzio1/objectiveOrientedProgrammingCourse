#include <iostream>
#include "Client.h"
using namespace std;
int Client::clientCount = 0;
int Client::maxID = 0;
Client::Client():limit(10){
	clientCount++;
	maxID++;
	iid = maxID;
	name = "Name";
	surname = "Surname";
}
Client::Client (const Client &copyCandidate):limit(copyCandidate.limit) {
	clientCount++;
	maxID++;
	name = copyCandidate.name;
	surname = copyCandidate.surname;
	iid = copyCandidate.iid;
	movieList = copyCandidate.movieList;
}
Client::Client(string n, string s, int lim, Movie *mL):limit(lim){
	clientCount++;
	maxID++;
}
Client::~Client(){
	clientCount--;
}
