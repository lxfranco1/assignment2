//
// Created by Alexander Franco on 10/4/19.
//

#include "Jet.h"
#include <math.h>
#include <string.h>
Jet::Jet() {
    setNumberOfEngines(1);
    setBrand("Custom");
    setModel("VTx");
}

//Jet has added parameter number of engines
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
  ran =floor(ran);                  //floor random number
    double mileage =time *ran  ;
    if(getNumberOfEngines()>2&&getFuelType().compare("Rocket")==0){     //5 percent increase for every engine
        mileage+= ((mileage*.055)*getNumberOfEngines());

    }

    return mileage;
}

//to string edited to cats int as a string for funtionality
string Jet::toString() {
  return "-> Jet\n" + PoweredVehicle::toString() + "\n\tEngine Number: " +
         std::to_string(getNumberOfEngines());
       }
