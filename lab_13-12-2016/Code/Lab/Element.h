//
// Created by Radosław Pieja on 12/13/16.
//

#ifndef LAB_ELEMENT_H
#define LAB_ELEMENT_H

#include "Node3D.h"
#include <iostream>
using namespace std;


template <int i, class T>
class Element {
protected:
    T* Amount;
    int rozmiar;
public:
    Element();
    Element(int, T*);
    Element(const Element &);
    ~Element();
};

template <int i, class T>
Element<i, T>::Element() {
    Amount = NULL;
    rozmiar=0;
}

template <int i, class T>
Element<i, T>::Element(int n, T* wsk) {
    Amount=wsk;
    rozmiar=n;
}

template <int i, class T>
Element<i, T>::Element(const Element &copy) {
    Amount=copy.Amount;
    rozmiar=copy.rozmiar;
}

template <int i, class T>
Element<i, T>::~Element() {
   // delete Amount;
   // delete rozmiar;
}

#endif //LAB_ELEMENT_H
