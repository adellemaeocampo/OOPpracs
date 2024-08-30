#include"ParkingLot.h"

#include<iostream>

using namespace std; 

ParkingLot::ParkingLot(int max) : max(max), curParked(0){
    vehicles = new Vehicle*[max];
}

int ParkingLot::getcount(){
    return curParked;
}

bool ParkingLot::parkVehicle(Vehicle* vehicle){
    if (curParked < max) {
        vehicles[curParked] = vehicle;
        curParked++;
        return true; 
    } else {
        cout << "parkinglot is full." << endl;
        return false; 
    }
}

bool ParkingLot::unparkVehicle(int ID){
    for(int i=0; i<max; i++) {
        if(ID==vehicles[i]->getID()){
            delete vehicles[i];

            for(int j=i; i<curParked-1; j++){
                vehicles[j] = vehicles[j-1];
                curParked --;
            }

            return true; 
        }
    }
    cout << "Vehicle not in the parkinglot" << endl;
    return false;
}

