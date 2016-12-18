//
// Created by radix on 18.12.16.
//

#ifndef LAB2_NODE3D_H
#define LAB2_NODE3D_H

#include "Node2D.h"

class Node3D : public Node2D{
protected:
    double z;
public:
    Node3D();
    Node3D(double, double, double, double, double, double);
    virtual ~Node3D();
    virtual void Print();
};


#endif //LAB2_NODE3D_H
