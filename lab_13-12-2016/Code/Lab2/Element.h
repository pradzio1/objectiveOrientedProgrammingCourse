//
// Created by radix on 18.12.16.
//

#ifndef LAB2_ELEMENT_H
#define LAB2_ELEMENT_H

#include "Node3D.h"

template <int amount, class node>
class Element {
    node* table;
public:
    Element();
    Element(Node *);
    void Print();
    ~Element();
};


#endif //LAB2_ELEMENT_H
