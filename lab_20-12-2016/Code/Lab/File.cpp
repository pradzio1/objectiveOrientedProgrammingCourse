//
// Created by Radosław Pieja on 12/20/16.
//

#include "File.h"

fstream File::openCSVFile() {
    fstream csvFile;
    csvFile.open("file.csv", ios::in);
    return csvFile;
}
Person* File::parseCSV() {
    fstream openCSVFileFstream=openCSVFile();
    string name, surname, salaryString, iidString, position;
    double salary;
    int iid;
    while(!openCSVFileFstream.eof()){
        getline(openCSVFileFstream, iidString, ',');
        //iid=stoi(iidString);
        getline(openCSVFileFstream, name, ',');
        getline(openCSVFileFstream, surname, ',');
        getline(openCSVFileFstream, salaryString, ',');
        //salary=stod(salaryString);
        openCSVFileFstream>>position;

        // Kontrolne wyswietlanie

        cout << iidString<<" "<<name << " "<<surname<<" "<<salaryString<<" "<<position<<"\n";
    }
    return NULL;
}