#include"ParkingLot.h"
#include"Vehicle.h"
#include<iostream>

using namespace std; 

ParkingLot::ParkingLot(int max) : max(max), curParked(0){
    vehicles = new Vehicle*[max];
}

int ParkingLot::getCount(){
    return curParked;
}

bool ParkingLot::parkVehicle(Vehicle* vehicle){
    if (curParked < max) {
        vehicles[curParked] = vehicle;
        curParked++;
        return true; 
    } else {
        cout << "The lot is full" << endl;
        return false; 
    }
}

bool ParkingLot::unparkVehicle(int ID){
    for(int i=0; i<max; i++) {
        if(ID==vehicles[i]->getID()){
            delete vehicles[i];

            for(int j=i; j<curParked-1; j++){
                vehicles[j] = vehicles[j-1];
                curParked--;
            }

            return true; 
        }
    }
    cout << "Vehicle not in the lot" << endl;
    return false;
}

int ParkingLot::countOverstayingVehicles(int maxParkingDuration){

}

