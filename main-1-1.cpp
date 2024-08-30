#include "Vehicle.h"

#include<ctime> 
#include<iostream> 

using namespace std; 

int main(){
    int numVehicles;
    cout << "Please input a number of vehicles: "; 
    cin >> numVehicles; 


    string vehicleType; 
    string vehicle[numVehicles]; 
    for(int i=0; i<numVehicles; i++) {
        cout << "choose the type of vehicle: ";
        cin >> vehicleType;
    }
}