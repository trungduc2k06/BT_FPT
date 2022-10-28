#include "VehicleIO.h"

/* Input */
//Vehicle
string VehicleIO::inputVehicleID()
{
    string id;
    cout << "Nhap ma ID phuong tien: ";
    cin.ignore();
    getline(cin, id);
    return id;
}
string VehicleIO::inputVehicleHangSX()
{
    string hangSX;
    cout << "Nhap hang san xuat phuong tien: ";
    cin.ignore();
    getline(cin, hangSX);
    return hangSX;
}
int VehicleIO::inputVehicleNamSX()
{
    int namSX;
    cout << "Nhap nam san xuat phuong tien: ";
    cin >> namSX
    return namSX;
}
int VehicleIO::inputVehiclePrice()
{
    int price;
    cout << "Nhap gia phuong tien: ";
    cin >> price;
    return price;
}
string VehicleIO::inputVehicleColor()
{
    string color;
    cout << "Nhap mau phuong tien: ";
    cin.ignore();
    getline(cin, color);
}
//Car
int VehicleIO::inputCarNumSeat()
{
    int numSeat;
    cout << "Nhap so cho ngoi: ";
    cin >> numSeat;
    return numSeat;
}
string VehicleIO::inputCarType()
{
    string type;
    cout << "Nhap kieu dong co: ";
    cin.ignore();
    getline(cin, type);
    return type;
}
Car VehicleIO::inputCar()
{
    Vehicle vehicle;
    Car car;
    cout << "___________Nhap thong tin o to:___________" << endl;
    vehicle.setID(inputVehicleID());
    vehicle.setHangSX(inputVehicleHangSX());
    vehicle.setNamSX(inputVehicleNamSX());
    vehicle.setPrice(inputVehiclePrice());
    vehicle.setColor(inputVehicleColor());
    car.setVehicle(vehicle);
    car.setNumSeat(inputCarNumSeat());
    car.setType(inputCarType());
    return car;
}
//Motor
int VehicleIO::inputMotorPower()
{
    int power;
    cout << "Nhap cong suat: ";
    cin >> power;
    return power;
}
Motor VehicleIO::inputMotor()
{
    Vehicle vehicle;
    Motor motor;
    cout << "___________Nhap thong tin xe may:___________" << endl;
    vehicle.setID(inputVehicleID());
    vehicle.setHangSX(inputVehicleHangSX());
    vehicle.setNamSX(inputVehicleNamSX());
    vehicle.setPrice(inputVehiclePrice());
    vehicle.setColor(inputVehicleColor());
    motor.setVehicle(vehicle);
    motor.setPower(inputMotorPower());
    return motor;
}
//Truck
int VehicleIO::inputTruckTomage()
{
    int tomage;
    cout << "Nhap trong tai: ";
    cin >> tomage;
    return tomage;
}
Truck VehicleIO::inputTruck()
{
    Vehicle vehicle;
    Truck truck;
    cout << "___________Nhap thong tin xe tai:___________" << endl;
    vehicle.setID(inputVehicleID());
    vehicle.setHangSX(inputVehicleHangSX());
    vehicle.setNamSX(inputVehicleNamSX());
    vehicle.setPrice(inputVehiclePrice());
    vehicle.setColor(inputVehicleColor());
    truck.setVehicle(vehicle);
    truck.setTomage(inputTruckTomage());
    return truck;
}

/* Output */
void VehicleIO::printInfoVehicle(string id, string hangSX, int namSX, int price, string color)
{
    cout << "ID: " << id << endl;
    cout << "Hang san xuat: " << hangSX << endl;
    cout << "Nam san xuat: " << namSX << endl;
    cout << "Gia ban: " << price << endl;
    cout << "Mau xe: " << color << endl;
}
void VehicleIO::printInfoCar(Vehicle vehicle, int numSeat, string type)
{
    cout << "___________Thong tin o to:___________" << endl;
    printInfoVehicle(vehicle.getID(), vehicle.getHangSX(), vehicle.getNamSX(), vehicle.getPrice(), vehicle.getColor());
    cout << "So cho ngoi: " << numSeat << endl;
    cout << "Kieu dong co: " << type << endl;
}
void VehicleIO::printInfoMotor(Vehicle vehicle, int power)
{
    cout << "___________Thong tin xe may:___________" << endl;
    printInfoVehicle(vehicle.getID(), vehicle.getHangSX(), vehicle.getNamSX(), vehicle.getPrice(), vehicle.getColor());
    cout << "Cong suat: " << power << endl;
}
void VehicleIO::printInfoTruck(Vehicle vehicle, int tomage)
{
    cout << "___________Thong tin xe tai:___________" << endl;
    printInfoVehicle(vehicle.getID(), vehicle.getHangSX(), vehicle.getNamSX(), vehicle.getPrice(), vehicle.getColor());
    cout << "Trong tai: " << tomage << endl;
}