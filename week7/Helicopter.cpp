#include "Helicopter.h"

#include<iostream>

using namespace std; 

Helicopter::Helicopter(){}

Helicopter::Helicopter(int w, string n){
    w = weight; 
    n = name;
    fuelConsumption = 0;
}

void Helicopter::fly(int headwind, int minutes){
    float lostFuel = 0.18; 
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

string Helicopter::set_name(string name){
    this->name=name; 
}

string Helicopter::get_name(){
    return name; 
}

float Helicopter::get_fuelConsumption(){
    return fuelConsumption; 
}