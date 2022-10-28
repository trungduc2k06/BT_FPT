#ifndef __VEHICLE_H
#define __VEHICLE_H

#include <iostream>

using namespace std;

class Vehicle
{
    private:
        string m_ID;
        string m_hangSX;
        int m_namSX;
        int m_price;
        string m_color;
    public:
        Vehicle();
        Vehicle(string, string, int, int, string);
        Vehicle(Vehicle&);
        ~Vehicle();
        void setID(string);
        string getID();
        void setHangSX(string);
        string getHangSX();
        void setNamSX(int);
        int getNamSX();
        void setPrice(int);
        int getPrice();
        void setColor(string);
        string getColor();
};

#endif