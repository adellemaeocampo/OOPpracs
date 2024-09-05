#ifndef AIRPLANE_H
#define AIRPLANE_H

#include"AirVehicle.h"

#include<iostream>

using namespace std; 

class Airplane : public AirVehicle {
    private:
        int p; 
        int numPassengers;
        float fuelConsumption;  
    public:
        Airplane();
        Airplane(int w, int p);
        void reducePassengers(int x); 
        int get_numPassengers();
        void fly(int headwind, int minutes);
        float get_fuelConsumption();
};  

#endif