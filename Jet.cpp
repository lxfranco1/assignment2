//
// Created by Alexander Franco on 10/4/19.
//

#include "Jet.h"
#include <math.h>
Jet::Jet() {
    setNumberOfEngines(1);
    setBrand("Custom");
    setModel("VTx");
}

Jet::Jet(string brand, string model, string fuelType, int engines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(engines);
}

Jet::~Jet() = default;

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int engines) {
    numberOfEngines=engines;

}

double Jet::mileageEstimate(double time) {
  double ran =rand() % 60 + 40;
  ran =floor(ran);
    double mileage =time *ran  ;
    if(getNumberOfEngines()>2){
        mileage+= ((mileage*.055)*getNumberOfEngines());

    }

    return mileage;
}

string Jet::toString() {
  return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Number: " +
         std::to_string(getNumberOfEngines());
       }
