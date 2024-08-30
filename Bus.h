#ifndef BUS_H
#define BUS_H

#include"Vehicle.h"
#include<ctime>
#include <iostream>

using namespace std;

class Bus : public Vehicle {
     public:
        Bus(int ID);
        int getParkingDuration() override; 
};

#endif