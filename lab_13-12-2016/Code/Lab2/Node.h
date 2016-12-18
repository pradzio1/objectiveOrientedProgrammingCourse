//
// Created by radix on 18.12.16.
//

#ifndef LAB2_NODE_H
#define LAB2_NODE_H

#include <iostream>
using namespace std;

class Node {
protected:
    double *variables;
public:
    Node();
    Node(double, double, double);
    virtual void Print();
    double *getVal();
    virtual ~Node();
};


#endif //LAB2_NODE_H
