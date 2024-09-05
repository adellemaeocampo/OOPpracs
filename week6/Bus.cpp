#include "Bus.h"
#include "Vehicle.h"

#include<ctime>
#include <iostream>

using namespace std; 

Bus::Bus(int ID) : Vehicle::Vehicle(ID){}

int Bus::getParkingDuration(){
    int parkDur = Vehicle::getParkingDuration();
    return parkDur*0.75;
}