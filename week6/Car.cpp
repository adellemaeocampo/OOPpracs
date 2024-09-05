#include"Car.h"
#include"Vehicle.h"

#include<ctime> 
#include <iostream>

using namespace std; 

Car::Car(int ID) : Vehicle::Vehicle(ID){}

int Car::getParkingDuration(){
    int parkDur = Vehicle::getParkingDuration();
    return parkDur*0.9; 
}