#include "AirVehicle.h"

AirVehicle::AirVehicle(){}

AirVehicle::AirVehicle(int w){
    weight = w; 
    fuel = 100.0;
    numberOfFlights = 0;
}

void AirVehicle::refuel(){
    fuel = 100.0; 
}


void AirVehicle::fly(int headwind, int minutes){
    this->headwind = headwind; 
    this->minutes = minutes; 
    numberOfFlights++;
}

int AirVehicle::set_weight(int weight){
    this->weight = weight;
}

int AirVehicle::get_weight(){
    return weight;
}

float AirVehicle::set_fuel(int fuel){
    this->fuel = fuel; 
}

float AirVehicle::get_fuel(){
    return fuel;
}

int AirVehicle::set_numberOfFlights(int numberOfFlights){
    this->numberOfFlights = numberOfFlights;
}

int AirVehicle::get_numberOfFlights(){
    return numberOfFlights;
}
