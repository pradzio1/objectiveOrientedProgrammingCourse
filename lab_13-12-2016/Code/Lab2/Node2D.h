//
// Created by radix on 18.12.16.
//

#ifndef LAB2_NODE2D_H
#define LAB2_NODE2D_H

#include "Node1D.h"

class Node2D : public Node1D{
protected:
    double y;
public:
    Node2D();
    Node2D(double strain, double strainRate, double temp, double X, double Y);
    virtual ~Node2D();
    virtual void Print();
};


#endif //LAB2_NODE2D_H
