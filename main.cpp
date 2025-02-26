#include <iostream>
#include "Car.h"
#include "Bicycle.h"
#include "Motorcycle.h"
#include "Jet.h"
#include "Skateboard.h"

void printVehiclesRoster(Vehicle **vehicles, int size);

int main() {
    std::cout << "Driving simulator" << std::endl;
    int size = 12;
    int capacity = 12;
    Vehicle **vehiclesArray = new Vehicle *[capacity];

    vehiclesArray[0] = new Car();
    vehiclesArray[1] = new Bicycle("eTAP", "P5X");
    vehiclesArray[2] = new Bicycle("R&A", "Dogma F8", 5);
    vehiclesArray[3] = new Car("Tesla", "T2", "electricity", "large");
    vehiclesArray[4] = new Bicycle("Mizuno", "Wave", 10);
    vehiclesArray[5] = new Car("BMW", "X5", "diesel", "grande");
    vehiclesArray[6] = new Jet("Lockeheed Martin","F-35","Rocket",3);
    vehiclesArray[7] = new Jet("Gloster","Meteor","Jet",2);
    vehiclesArray[8] = new Skateboard("Loaded","Vanguard");
    vehiclesArray[9] = new Skateboard("Vans","Basic 8");
    vehiclesArray[10] = new Motorcycle("Yamaha","Zuma","Petrol",150);
    vehiclesArray[11] = new Motorcycle("Suzuki","Hayabusa","Petrol",200);



    printVehiclesRoster(vehiclesArray, size);

    if (vehiclesArray != 0) { // If it is not a null pointer
        // do not use nullptr. It is not supported on linprog
        for (int i = 0; i < size; i++) {
            delete vehiclesArray[i];
        }
        delete[] vehiclesArray;
    }
    return 0;
}

void printVehiclesRoster(Vehicle **vehicles, int size) {
    double simulatedDistance = 130;
    for (int i = 0; i < size; i++) {
        cout << i << " " << vehicles[i]->toString() << endl;
        cout << "\tWould travel: "
             << vehicles[i]->mileageEstimate(simulatedDistance) << " miles in "
             << simulatedDistance << " seconds" << endl;
    }
}
