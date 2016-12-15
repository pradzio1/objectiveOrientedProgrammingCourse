//
// Created by Radosław Pieja on 12/13/16.
//

#ifndef LAB_ELEMENT_H
#define LAB_ELEMENT_H

#include <iostream>
using namespace std;


template <int i, class T>
class Element {
protected:
    T* Amount;
    int rozmiar;
public:
    Element();
    Element(int, T);
    Element(const Element &);
    ~Element();
};


#endif //LAB_ELEMENT_H
