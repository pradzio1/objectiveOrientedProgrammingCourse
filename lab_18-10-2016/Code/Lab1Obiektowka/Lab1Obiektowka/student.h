#include <iostream>
#include <string>
#pragma once
using namespace std;
class student {
	string name, surname, fieldOfStudy;
	int year, iid;
	public: 
		static int count;
		void getStudentInfo();
		void setStudentInfo();
		student();
};

