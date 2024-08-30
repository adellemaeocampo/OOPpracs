#include"Vehicle.h"
#include"Motorbike.h"

#include<ctime>

using namespace std;

Moterbike::Moterbike(int ID) : Vehicle::Vehicle(ID){}

int Moterbike::getParkingDuration(){
    int parkedTime =  Vehicle::getParkingDuration();
    return parkedTime*0.85;
}
