#include <ctime>

#include"Vehicle.h"

using namespace std; 

Vehicle::Vehicle(int ID) : ID(ID) {
    time_t timeOfEntry = time(nullptr);
}

Car::Car(int ID) : Vehicle(ID){}

Bus::Bus(int ID) : Vehicle(ID){}

Moterbike::Moterbike(int ID) : Vehicle(ID){}

int Car::getParkingDuration(){
    int secondsParked =  difftime(time(nullptr), timeOfEntry);
    int carRed = secondsParked * 0.1; 
    return carRed; 
}

int Bus::getParkingDuration(){
    int secondsParked =  difftime(time(nullptr), timeOfEntry);
    int busRed = secondsParked * 0.25; 
    return busRed; 
}

int Moterbike::getParkingDuration(){
    int secondsParked =  difftime(time(nullptr), timeOfEntry);
    int MBRed = secondsParked * 0.25; 
    return MBRed; 
}


