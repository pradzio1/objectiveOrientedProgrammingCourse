//
// Created by radix on 18.12.16.
//

#include "Node2D.h"

Node2D::Node2D(){
    y=0;
}
Node2D::Node2D(double strain, double strainRate, double temp, double X, double Y) : Node1D(strain, strainRate, temp, X) {
    y=Y;
}
Node2D::~Node2D() {}
void Node2D::Print(){
    Node1D::Print();
    cout << "\ty="<<y<<"\t";
}


