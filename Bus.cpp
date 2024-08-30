#include "Bus.h"
#include "Vehicle.h"

#include<ctime>

using namespace std; 

Bus::Bus(int ID) : Vehicle(ID){}

int Bus::getParkingDuration(){
    int secondsParked =  difftime(time(0), timeOfEntry);
    int busRed = secondsParked * 0.25; 
    return busRed; 
}