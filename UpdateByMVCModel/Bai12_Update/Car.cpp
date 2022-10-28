#include "Car.h"

Car::Car()
{
    m_numSeat = 0;
    m_type = " ";
}
Car::Car(Vehicle vehicle, int numSeat, string type)
{
    m_vehicle = vehicle;
    m_numSeat = numSeat;
    m_type = type;
}
Car::Car(Car& car)
{
    m_vehicle = car.m_vehicle;
    m_numSeat = car.m_numSeat;
    m_type = car.m_type;
}
Car::~Car()
{

}
void Car::setVehicle(Vehicle vehicle)
{
    m_vehicle = vehicle;
}
Vehicle Car::getVehicle()
{
    return m_vehicle;
}
void Car::setNumSeat(int numSeat)
{
    m_numSeat = numSeat;
}
int Car::getNumSeat()
{
    return m_numSeat;
}
void Car::setType(string type)
{
    m_type = type;
}
string Car::getType()
{
    return m_type;
}