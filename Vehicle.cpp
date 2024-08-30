#include"Vehicle.h"
#include <ctime>
#include <iostream>

using namespace std; 

Vehicle::Vehicle(int ID) : ID(ID), timeOfEntry(time(nullptr)) {}

int Vehicle::getID(){
    return ID; 
}

int Vehicle::getParkingDuration(){
    time_t curTime = time(nullptr);
    int parkedTime = curTime - timeOfEntry;
    return parkedTime;
}

