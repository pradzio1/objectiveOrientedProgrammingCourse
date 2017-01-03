//
// Created by radix on 18.12.16.
//

#include "Node.h"
#include <ctime>
#include <cstdlib>

Node::Node(){
    variables=new double[3];
    variables[0]=rand()%400+800;
    variables[1]=(rand()%100)/double(100);
    variables[2]=rand()%10+1;
}
Node::Node(double strain, double strainRate, double temp) {
    variables=new double[3];
    variables[0]=strain;
    variables[1]=strainRate;
    variables[2]=temp;
}
Node::~Node() {
    delete[] variables;
}
void Node::Print() {
    cout<<"Strain: "<<variables[0]<<"\tStrain Rate: "<<variables[1]<<"\tTemp: "<<variables[2]<<"\n";
}
double* Node::getVal() {
    double vals[3];
    for (int x=0;x<3;x++)
        vals[x]=variables[x];
    return vals;
}