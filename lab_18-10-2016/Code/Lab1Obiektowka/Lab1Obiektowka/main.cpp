#include <iostream>
#include <string>
#include "student.h"
using namespace std;

int main() {
	student radek;
	radek.setStudentInfo();
	radek.getStudentInfo();

	student *tablica = new student[5];
	for (int i = 0; i < 5; ++i) {
		tablica[i].getStudentInfo();
	}
	system("pause");
	return 0;
}