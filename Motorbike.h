#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include"Vehicle.h"
#include<ctime> 

using namespace std; 

class Moterbike : public Vehicle {
     public:
        Moterbike(int ID);
        int getParkingDuration(); 
};

#endif 