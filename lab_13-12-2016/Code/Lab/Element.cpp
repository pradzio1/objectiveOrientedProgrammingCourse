//
// Created by Radosław Pieja on 12/13/16.
//

#include "Element.h"
using namespace std;

template <int i, class T>
Element<i, T>::Element() {
    Amount = NULL;
    rozmiar=0;
}

template <int i, class T>
Element<i, T>::Element(int n, T wsk) {
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
    delete Amount;
    delete rozmiar;
}