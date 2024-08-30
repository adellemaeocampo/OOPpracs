#include "ParkingLot.h"
#include"Car.h"
#include"Bus.h"
#include"Motorbike.h"

#include<iostream>

using namespace std; 

int main() {
    ParkingLot parkinglot(3);

    Motorbike* mBike = new Motorbike(1);
    Bus* bus = new Bus(2);
    Car* car = new Car(3);
    Car* car1 = new Car(4);

    cout << parkinglot.parkVehicle(mBike) << " " << parkinglot.parkVehicle(bus) << " " <<
            parkinglot.parkVehicle(car) << " " << parkinglot.parkVehicle(car1) << endl; 

    cout << parkinglot.unparkVehicle(3) << endl;

    return 0;
 
}