#include"Car.h"
#include"Vehicle.h"

#include<ctime> 

using namespace std; 

Car::Car(int ID) : Vehicle(ID){}

int Car::getParkingDuration(){
    int secondsParked =  difftime(time(nullptr), timeOfEntry);
    int carRed = secondsParked * 0.1; 
    return carRed; 
}