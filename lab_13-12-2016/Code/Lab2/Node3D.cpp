//
// Created by radix on 18.12.16.
//

#include "Node3D.h"

Node3D::Node3D(){
    z=0;
}
Node3D::Node3D(double strain, double strainRate, double temp, double X, double Y, double Z):Node2D(strain, strainRate, temp, X, Y){
    z=Z;
}
Node3D::~Node3D(){}
void Node3D::Print(){
    Node2D::Print();
    cout << "\tz="<<z<<"\t";
}


