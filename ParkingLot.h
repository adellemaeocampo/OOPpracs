#ifndef PARKINGLOT_H 
#define PARKINGLOT_H

#include"Vehicle.h"

class ParkingLot {
    private: 
        int max;
        int curParked; 
        Vehicle** vehicles; 
    public:
        ParkingLot(int max);
        int getCount();
        bool parkVehicle(Vehicle* vehicle);
        bool unparkVehicle(int ID);
        int countOverstayingVehicles(int maxParkingDuration);
};

#endif