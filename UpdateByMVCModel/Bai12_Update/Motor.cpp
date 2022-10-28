#include "Motor.h"

Motor::Motor()
{
    m_power = 0;
}
Motor::Motor(Vehicle vehicle, int power)
{
    m_vehicle = vehicle;
    m_power = power;
}
Motor::Motor(Motor& motor)
{
    m_vehicle = motor.m_vehicle;
    m_power = motor.m_power;
}
Motor::~Motor()
{

}
void Motor::setVehicle(Vehicle vehicle)
{
    m_vehicle = vehicle;
}
Vehicle Motor::getVehicle()
{
    return m_vehicle;
}
void Motor::setPower(int power)
{
    m_power = power;
}
int Motor::getPower()
{
    return m_power;
}