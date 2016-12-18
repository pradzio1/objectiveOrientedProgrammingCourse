//
// Created by Radosław Pieja on 12/13/16.
//

#ifndef LAB_NODE1D_H
#define LAB_NODE1D_H

#include "Node.h"

class Node1D : public Node{
protected:
    double *zmienne;
    double x;
public:
    Node1D();
    Node1D(double);
    Node1D(const Node1D &);
    ~Node1D();
};


#endif //LAB_NODE1D_H
