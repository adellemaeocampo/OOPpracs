#ifndef CAR_H
#define CAR_H

#include"Vehicle.h"
#include<ctime>
#include <iostream>

using namespace std; 

class Car : public Vehicle {
    public:
        Car(int ID);
        int getParkingDuration() override; 
};

#endif