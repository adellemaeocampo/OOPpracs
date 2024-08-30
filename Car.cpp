#include"Car.h"
#include"Vehicle.h"

#include<ctime> 
#include <iostream>

using namespace std; 

Car::Car(int ID) : Vehicle::Vehicle(ID){}

int Car::getParkingDuration(){
    int parkedTime = Vehicle::getParkingDuration();
    return parkedTime * 0.9; 
}