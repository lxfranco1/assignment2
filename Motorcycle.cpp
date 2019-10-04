//
// Created by Alexander Franco on 10/4/19.
//

#include "Motorcycle.h"
#include <math.h>
#include <string.h>
Motorcycle::Motorcycle() {
    setEngineType(100);
    setBrand("Custom");
    setModel("VTx");
}

//Motorcycle has added parameter engine type
Motorcycle::Motorcycle(string brand, string model, string fuelType, int engines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineType(engines);
}

Motorcycle::~Motorcycle() = default;

int Motorcycle::getEngineType() {
    return engineType;
}

void Motorcycle::setEngineType(int engines) {
    engineType=engines;

}

double Motorcycle::mileageEstimate(double time) {
  double mileage = 7.5 * time;
  if (engineType==100) {
      mileage += mileage * 0.09;
  }
  else if (engineType==150){
    mileage += mileage * 0.13;

  }

  else if(engineType==170){
    mileage += mileage * 0.15;

  }

  else if(engineType==200){
    mileage += mileage * 0.18;

  }
  return mileage;
}

//to string edited to cats int as a string for cuntionality
string Motorcycle::toString() {
  return "-> Motorcycle\n" + PoweredVehicle::toString() + "\n\tEngine Number: " +
         std::to_string(getEngineType())+"cc";
       }
