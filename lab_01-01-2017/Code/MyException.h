//
// Created by Radosław Pieja on 1/3/17.
//

#ifndef CODE_MYEXCEPTION_H
#define CODE_MYEXCEPTION_H

#include <iostream>
using namespace std;

class MyException {
public:
    int err;
    MyException(int);
    int what();
};


#endif //CODE_MYEXCEPTION_H