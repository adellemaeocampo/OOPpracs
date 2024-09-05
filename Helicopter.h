#ifndef HELICOPTER_H
#define HELICOPTER_H

#include"AirVehicle.h"
#include<iostream> 

using namespace std; 

class Helicopter : public AirVehicle {
    protected:
        string name;
        float fuelConsumption;
    public:
        Helicopter();
        Helicopter(int w, string n);
        void fly(int headwind, int minutes);
        string set_name(string name); 
        string get_name();
        float get_fuelConsumption();
};


#endif