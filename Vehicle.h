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
};

class Car : public Vehicle {
    public:
        Car(int ID);
        int getParkingDuration(); 
};

class Bus : public Vehicle {
     public:
        Bus(int ID);
        int getParkingDuration(); 
};

class Moterbike : public Vehicle {
     public:
        Moterbike(int ID);
        int getParkingDuration(); 
};

#endif