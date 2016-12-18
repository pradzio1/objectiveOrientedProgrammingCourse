//
// Created by Radosław Pieja on 12/13/16.
//

#ifndef LAB_NODE3D_H
#define LAB_NODE3D_H
#include <iostream>
#include "Node2D.h"
using namespace std;
class Node3D : public Node2D {

protected:
    double z;
public:
    Node3D();
    Node3D(double, double, double);
    Node3D(const Node3D &);
    ~Node3D();
    virtual void wypisz();
};
#endif //LAB_NODE3D_H
