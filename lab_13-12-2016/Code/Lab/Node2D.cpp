//
// Created by Radosław Pieja on 12/13/16.
//

#include "Node2D.h"
Node2D::Node2D() {
    zmienne=new double[2];
    x=1;
    y=2;
    zmienne[0]=x;
}
Node2D::Node2D(double i, double j) {
    x=i;
    y=j;
    zmienne=new double[1];
    zmienne[0]=x;
    zmienne[1]=y;
}
Node2D::Node2D(const Node2D &copy) {
    x=copy.x;
    y=copy.y;
    zmienne=copy.zmienne;
}
Node2D::~Node2D() {}