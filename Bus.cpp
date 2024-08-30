#include "Bus.h"
#include "Vehicle.h"

#include<ctime>
#include <iostream>

using namespace std; 

Bus::Bus(int ID) : Vehicle::Vehicle(ID){}

int Bus::getParkingDuration(){
    int parkedTime = Vehicle::getParkingDuration();
    return parkedTime * 0.75;
}