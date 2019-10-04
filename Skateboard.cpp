//
// Created by Alexander Franco on 10/4/19.
//

#include "Skateboard.h"
#include <math.h>

Skateboard::Skateboard(string brand, string model) {
    setBrand(brand);
    setModel(model);
}

Skateboard::~Skateboard() = default;



double Skateboard::mileageEstimate(double time) {
  double ran =rand() % 400 + 100;
    ran=ran/1000;
    double mileage = ran * time;
    if(time>25&&time<250){
      int head = time*1/3;
      double ran2 = rand() % head + 1;
      mileage+=ran2;
    }
    mileage=floor(mileage);
    return mileage;
}

string Skateboard::toString() {
    string s = "-> Skateboard\n\t";
    return "->Skateboard\n" + Vehicle::toString() ;
}
