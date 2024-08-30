#include"Vehicle.h"
#include"Motorbike.h"

#include<ctime>
#include <iostream>

using namespace std;

Motorbike::Motorbike(int ID) : Vehicle::Vehicle(ID){}

int Motorbike::getParkingDuration(){
    int parkedTime =  Vehicle::getParkingDuration();
    return parkedTime*0.85;
}
