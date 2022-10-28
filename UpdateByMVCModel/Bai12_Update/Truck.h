#ifndef __TRUCK_H
#define __TRUCK_H

#include "Vehicle.h"

class Truck : public Vehicle
{
    private:
        Vehicle m_vehicle;
        int m_tomage;
    public:
        Truck();
        Truck(Vehicle, int);
        Truck(Truck&);
        ~Truck();
        void setVehicle(Vehicle);
        Vehicle getVehicle();
        void setTomage(int);
        int getTomage();
};

#endif