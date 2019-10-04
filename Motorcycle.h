//
// Created by Alexander Franco on 10/4/19.
//

#ifndef DRIVINGSIMULATOR_MOTORCYCLE_H
#define DRIVINGSIMULATOR_MOTORCYCLE_H

#include "PoweredVehicle.h"

class Motorcycle : public PoweredVehicle {

private:
    int engineType;

public:
    Motorcycle();

    explicit Motorcycle(string brand, string model, string fuelType,
                 int engine=100);

    virtual ~Motorcycle();
    int getEngineType();
    void setEngineType(int engines);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif //DRIVINGSIMULATOR_MOTORCYCLE_H
