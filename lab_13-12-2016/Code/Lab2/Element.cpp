//
// Created by radix on 18.12.16.
//
#include "Element.h"
template<int amount, class node>
void Element<amount, node>::Print() {
    double sum[3]={0};
    double *val;
    for (int x=0;x<amount;x++){
        table[x].Print();
        cout << endl;
        val=table[x].getVal();
        for(int y=0; y<2 ; y++)
            sum[y]+=val[y];
    }
    cout << "\nAverages: ";
    double avg[3];
    for (int x=0;x<3;x++){
        avg[x]=sum[x]/amount;
        cout << avg[x] << "\t";
    }
}
template <int amount, class node>
Element<amount, node>::Element() {
    table=new node[amount];
}
template<int amount, class node>
Element<amount, node>::Element(Node *pointer) {
    table=new node[amount];
    for (int x=0;x<amount;x++){
        table[x]=pointer[x];
    }
}
template <int amount, class node>
Element<amount, node>::~Element() {
    delete[] table;
}