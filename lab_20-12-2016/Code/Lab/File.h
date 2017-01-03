//
// Created by Radosław Pieja on 12/20/16.
//

#ifndef LAB_FILE_H
#define LAB_FILE_H

#include <fstream>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <string>
#include "Person.h"

using namespace std;

class File {
public:
    static fstream openCSVFile();
    static Person* parseCSV();
};


#endif //LAB_FILE_H
