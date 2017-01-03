//
// Created by Radosław Pieja on 12/20/16.
//

#include "Worker.h"

Worker::Worker() {
    salary*=1.5;
    position="Pracownik";
}
Worker::Worker(double salaryMultiplier) {
    salary*=salaryMultiplier;
    position="Pracownik";
}
Worker::~Worker() {}