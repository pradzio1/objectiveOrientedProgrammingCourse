#include <iostream>
#include <ctime>
#include <cstdlib>

#include "Element.h"
#include "Element.cpp"

typedef Element<3, Node2D> Element2DTri;
typedef Element<8, Node3D> Element3DOct;

int main() {
    srand(time(NULL));
    Element<4, Node3D> a;
    a.Print();

    return 0;
}