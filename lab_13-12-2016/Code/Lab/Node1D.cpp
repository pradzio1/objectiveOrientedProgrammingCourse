//
// Created by Radosław Pieja on 12/13/16.
//

#include "Node1D.h"
Node1D::Node1D() {
    zmienne=new double[1];
    x=1;
    zmienne[0]=x;
}
Node1D::Node1D(double i) {
    x=i;
    zmienne=new double[1];
    zmienne[0]=x;
}
Node1D::Node1D(const Node1D &copy) {
    x=copy.x;
    zmienne=copy.zmienne;
}
Node1D::~Node1D() {
    delete zmienne;
}