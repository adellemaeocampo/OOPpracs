#ifndef VEHICLE_H
#define VEHICLE_H 

#include <ctime>

using namespace std;

class Vehicle {
    protected: 
        int ID; 
        time_t timeOfEntry; 
    public:
        Vehicle(int ID);
        virtual int getParkingDuration(); 
};

#endif