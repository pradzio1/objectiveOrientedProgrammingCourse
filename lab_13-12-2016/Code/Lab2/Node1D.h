//
// Created by radix on 18.12.16.
//

#ifndef LAB2_NODE1D_H
#define LAB2_NODE1D_H

#include "Node.h"

class Node1D:public Node {
protected:
    double x;
public:
    Node1D();
    Node1D(double, double, double, double);
    virtual ~Node1D();
    virtual void Print();
};


#endif //LAB2_NODE1D_H
