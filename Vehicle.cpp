#include <ctime>

#include"Vehicle.h"

using namespace std; 

Vehicle::Vehicle(int ID) : ID(ID) {
    time_t timeOfEntry = time(nullptr);
}


