//
// Created by Alexander Franco on 10/4/19.
//

#include "Jet.h"

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

Jet::~Jet() {

};

int Jet::getNumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int engines) {
    numberOfEngines=engines;

}

double Jet::mileageEstimate(double time) {
    double mileage ;
    return 0;
}

string Jet::toString() {
    return "-> Jet\n" + PoweredVehicle::toString() ;
}
