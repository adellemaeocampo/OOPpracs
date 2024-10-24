#ifndef AIRFLEET_H
#define AIRFLEET_H

#include "AirVehicle.h"


class AirFleet {
    private:
    public:
        AirFleet();
        AirVehicle** fleet;
        AirVehicle** get_fleet; 
};


#endif