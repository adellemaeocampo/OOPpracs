#include"Vehicle.h"
#include"Motorbike.h"

#include<ctime>

using namespace std;

Moterbike::Moterbike(int ID) : Vehicle(ID){}

int Moterbike::getParkingDuration(){
    int secondsParked =  difftime(time(0), timeOfEntry);
    int MBRed = secondsParked * 0.25; 
    return MBRed; 
}
