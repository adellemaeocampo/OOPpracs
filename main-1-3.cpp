#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

#include <iostream> 

using namespace std; 

int main(){
    ParkingLot parkinglot(10);

    Car* car1 = new Car(1);
    Car* car2 = new Car(2);
    Car* car3 = new Car(3);
    Car* car4 = new Car(4);
    Car* car5 = new Car(5);
    Bus* bus1 = new Bus(6);
    Bus* bus2 = new Bus(7);
    Bus* bus3 = new Bus(8);
    Motorbike* motorbike1 = new Motorbike(9);
    Motorbike* motorbike2 = new Motorbike(10);

    parkinglot.parkVehicle(car1);
    parkinglot.parkVehicle(car2);
    parkinglot.parkVehicle(car3);
    parkinglot.parkVehicle(car4);
    parkinglot.parkVehicle(car5);
    parkinglot.parkVehicle(bus1);
    parkinglot.parkVehicle(bus2);
    parkinglot.parkVehicle(bus3);
    parkinglot.parkVehicle(motorbike1);
    parkinglot.parkVehicle(motorbike2);
 

    cout << "Number of overstaying vehicles: " << parkinglot.countOverstayingVehicles(15) << endl;

    return 0;
}