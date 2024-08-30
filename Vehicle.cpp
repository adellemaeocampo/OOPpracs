#include <ctime>

#include"Vehicle.h"

using namespace std; 

Vehicle::Vehicle(int ID) : ID(ID) {
    time_t timeOfEntry = time(nullptr);
}

int Vehicle::getParkingDuration(){
    int secondsParked =  difftime(time(0), timeOfEntry);
    return secondsParked;
}

