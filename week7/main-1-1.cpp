#include "AirVehicle.h"

#include<iostream>

using namespace std; 

int main(){
    AirVehicle* plane = new AirVehicle(70);

    cout << "Weight: " << plane->get_weight() << " Fuel: " << plane->get_fuel() << " Number of Flights: " << plane->get_numberOfFlights() <<endl;

    plane->set_fuel(50.0);
    plane->set_numberOfFlights(5);
    plane->set_weight(80);

    cout << "Weight: " << plane->get_weight() << " Fuel: " << plane->get_fuel() << " Number of Flights: " << plane->get_numberOfFlights() <<endl;

    plane->fly(500, 60);

    cout << "number of flights now: " << plane->get_numberOfFlights() <<endl;

    return 0;
}