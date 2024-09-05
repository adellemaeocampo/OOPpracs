#include "Airplane.h"
#include "AirVehicle.h"

Airplane::Airplane(){}

Airplane::Airplane(int w, int p){
    w= weight;
    p= numPassengers;
}

void Airplane::reducePassengers(int x){
    numPassengers = numPassengers-x; 

    if(numPassengers < 0){
        numPassengers = 0; 
    }
}

int Airplane::get_numPassengers(){
    return numPassengers;
}

void Airplane::fly(int headwind, int minutes){
    float lostFuel = 0.25; 
    float overFactor = 0;
    fuelConsumption = fuel - (lostFuel*minutes)-(overFactor*weight*minutes); 

    if(fuelConsumption > 0.2){
        if(headwind >= 40) {
            lostFuel = 0.4; 
        } 

        if(weight > 5670) {
            lostFuel = lostFuel+0.01*(weight-5670);
        }

        numberOfFlights++;
    } else {
       cout << "plane cant fly" <<endl;
    }
}

float Airplane::get_fuelConsumption(){
    return fuelConsumption; 
}