#include "Vehicle.h"

Vehicle::Vehicle()
{
    m_ID = " ";
    m_hangSX = " ";
    m_namSX = 0;
    m_price = 0;
    m_color = " ";
}
Vehicle::Vehicle(string id, string hangSX, int namSX, int price, string color)
{
    m_ID = id;
    m_hangSX = hangSX;
    m_namSX = namSX;
    m_price = price;
    m_color = color;
}
Vehicle::Vehicle(Vehicle& vehicle)
{
    m_ID = vehicle.m_ID;
    m_hangSX = vehicle.m_hangSX;
    m_namSX = vehicle.m_namSX;
    m_price = vehicle.m_price;
    m_color = vehicle.m_color;
}
Vehicle::~Vehicle()
{

}
void Vehicle::setID(string id) 
{
    m_ID = id;
}
string Vehicle::getID()
{
    return m_ID;
}
void Vehicle::setHangSX(string hangSX)
{
    m_hangSX = hangSX;
}
string Vehicle::getHangSX()
{
    return m_hangSX;
}
void Vehicle::setNamSX(int namSX)
{
    m_namSX = namSX;
}
int Vehicle::getNamSX()
{
    return m_namSX;
}
void Vehicle::setPrice(int price)
{
    m_price = price;
}
int Vehicle::getPrice()
{
    return m_price;
}
void Vehicle::setColor(string color)
{
    m_color = color;
}
string Vehicle::getColor()
{
    return m_color;
}