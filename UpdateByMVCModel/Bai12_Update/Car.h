#ifndef _CAR_H_
#define _CAR_H_

#include "Vehicle.h"
 
class Car : public Vehicle
{
private:
    Vehicle m_vehicle;
    int m_numSeat;
    string m_type;
public:
    Car();
    Car(Vehicle, int, string);
    Car(Car&);
    ~Car();
    void setVehicle(Vehicle);
    Vehicle getVehicle();
    void setNumSeat(int);
    int getNumSeat();
    void setType(string);
    string getType();
};


#endif