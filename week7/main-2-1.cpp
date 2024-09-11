#include "Helicopter.h"
#include "AirVehicle.h"

#include<iostream>

using namespace std; 

int main(){
    Helicopter* h1 = new Helicopter(4000, "H1"); 

    cout << "Name: "<< h1->get_name()<< "Weight: " << h1->get_weight() << endl; 

    h1->fly(30, 60);

    cout << "here is the fuel consumption: " << h1->get_fuelConsumption() << endl; 

    return 0; 

}