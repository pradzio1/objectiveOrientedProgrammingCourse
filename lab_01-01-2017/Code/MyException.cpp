//
// Created by Radosław Pieja on 1/3/17.
//

#include "MyException.h"
MyException::MyException(int n) {
    if(n==1)
        err=1;
    else if(n==2)
        err=2;
    else if(n==3)
        err=3;
    else
        err=4;
}
int MyException::what(){
    return err;
}