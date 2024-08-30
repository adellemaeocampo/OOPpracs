#include "Bus.h"
#include "Vehicle.h"

#include<ctime>

using namespace std; 

Bus::Bus(int ID) : Vehicle::Vehicle(ID){}

int Bus::getParkingDuration(){
    int parkedTime = Vehicle::getParkingDuration();
    return parkedTime * 0.25;
}