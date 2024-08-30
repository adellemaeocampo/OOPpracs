#include "Vehicle.h"
#include"Car.h"
#include"Bus.h"
#include"Motorbike.h"

#include<ctime> 
#include<iostream> 

using namespace std; 

int main(){
    int numVehicles = 3; 

    Vehicle* arr[numVehicles];

    arr[0] = new Car(1);
    arr[1] = new Bus(2);
    arr[2] = new Moterbike(3); 
   

   for(int i=0; i<numVehicles; i++) {
        cout << "Vehicle ID: " << arr[i]->getID() << " Duration: " << arr[i]->getParkingDuration() <<endl;
    } 

    return 0;
}