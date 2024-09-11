#include"Airplane.h"
#include"AirVehicle.h"

#include<iostream>

using namespace std; 

int main(){
    Airplane* m1 = new Airplane(400, 30); 

    cout << "Weight: " << m1->get_weight() << " Passengers: " << m1->get_numPassengers() <<endl;

    m1->reducePassengers(5);

    cout << "passenger: " << m1->get_numPassengers() << endl;

    m1->fly(30, 60);

    cout << "Fuel Consumption: " << m1->get_fuelConsumption() <<endl;

    return 0;
}