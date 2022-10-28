#ifndef _VEHICLEIO_H_
#define _VEHICLEIO_H_

#include "Vehicle.h"
#include "Car.h"
#include "Motor.h"
#include "Truck.h"

class VehicleIO
{
    public:
        /* Input */
        //Vehicle
        string inputVehicleID();
        string inputVehicleHangSX();
        int inputVehicleNamSX();
        int inputVehiclePrice();
        string inputVehicleColor();
        //Car
        int inputCarNumSeat();
        string inputCarType();
        Car inputCar();
        //Motor
        int inputMotorPower();
        Motor inputMotor();
        //Truck
        int inputTruckTomage();
        Truck inputTruck();

        /* Output */
        void printInfoVehicle(string, string, int, int, string);
        void printInfoCar(Vehicle, int, string);
        void printInfoMotor(Vehicle, int);
        void printInfoTruck(Vehicle, int);
};

#endif