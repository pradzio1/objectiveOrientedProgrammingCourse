//
// Created by radix on 18.12.16.
//

#include "Node1D.h"
Node1D::Node1D(){
    x=0;
}
Node1D::Node1D(double strain, double strainRate, double temp, double X) : Node(strain, strainRate, temp){
    x=X;
}
Node1D::~Node1D() {}
void Node1D::Print() {
    Node::Print();
    cout << "\tx="<<x<<"\t";
}
