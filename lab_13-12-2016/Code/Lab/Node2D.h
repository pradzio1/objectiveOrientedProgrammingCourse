//
// Created by Radosław Pieja on 12/13/16.
//

#ifndef LAB_NODE2D_H
#define LAB_NODE2D_H


#include "Node1D.h"

class Node2D : public Node1D{
protected:
    double y;
public:
    Node2D();
    Node2D(double, double);
    Node2D(const Node2D &);
    ~Node2D();
};



#endif //LAB_NODE2D_H
