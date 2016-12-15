//
// Created by Radosław Pieja on 12/13/16.
//

#include "Node3D.h"
Node3D::Node3D() {
    zmienne=new double[3];
    x=1;
    y=2;
    z=3;
    zmienne[0]=x;
    zmienne[1]=y;
    zmienne[2]=z;
}
Node3D::Node3D(double i, double j, double k) {
    x=i;
    y=j;
    z=k;
    zmienne=new double[1];
    zmienne[0]=x;
    zmienne[1]=y;
    zmienne[2]=z;

}
Node3D::Node3D(const Node3D &copy) {
    x=copy.x;
    y=copy.y;
    z=copy.z;
    zmienne=copy.zmienne;
}
Node3D::~Node3D() {}
