#ifndef _MOTOR_H_
#define _MOTOR_H_

#include "Vehicle.h"

class Motor : public Vehicle
{
private:
    Vehicle m_vehicle;
    int m_power;
public:
    Motor();
    Motor(Vehicle, int);
    Motor(Motor&);
    ~Motor();
    void setVehicle(Vehicle);
    Vehicle getVehicle();
    void setPower(int);
    int getPower();
};

#endif