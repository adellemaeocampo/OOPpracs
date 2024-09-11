#ifndef AIRVEHICLE_H 
#define AIRVEHICLE_H

class AirVehicle {
    protected:
        int weight;
        float fuel;
        int numberOfFlights;
        int headwind; 
        int minutes; 
    public:
        AirVehicle();
        AirVehicle(int w);
        void refuel();
        virtual void fly(int headwind, int minutes);
        int set_weight(int weight); 
        int get_weight();
        float set_fuel(int fuel);
        float get_fuel(); 
        int set_numberOfFlights(int numberOfFlights);
        int get_numberOfFlights();
};


#endif