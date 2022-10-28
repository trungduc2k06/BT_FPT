#include "Truck.h"

Truck::Truck()
{
    m_tomage = 0;
}
Truck::Truck(Vehicle vehicle, int tomage)
{
    m_vehicle = vehicle;
    m_tomage = tomage;
}
Truck::Truck(Truck& truck)
{
    m_vehicle = truck.m_vehicle;
    m_tomage = truck.m_tomage;
}
Truck::~Truck()
{

}
void Truck::setVehicle(Vehicle vehicle)
{
    m_vehicle = vehicle;
}
Vehicle Truck::getVehicle()
{
    return m_vehicle;
}
void Truck::setTomage(int tomage)
{
    m_tomage = tomage;
}
int Truck::getTomage()
{
    return m_tomage;
}