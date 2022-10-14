#include "HotelView.h"

string HotelView::inputPersonName()
{
    string name;
    cout << "Nhap ten: ";
    cin.ignore();
    getline(cin, name);
    return name;
}
int HotelView::inputPersonAge()
{
    int age;
    cout << "Nhap tuoi: ";
    cin >> age;
    return age;
}
string HotelView::inputPersonPassport()
{
    string passport;
    cout << "Nhap CMND: ";
    cin.ignore();
    getline(cin, passport);
    return passport;
}
int HotelView::inputHotelNumRent()
{
    int numRent;
    cout << "Nhap so ngay thue: ";
    cin >> numRent;
    return numRent;
}
int HotelView::inputHotelTypeRoom()
{
    int typeRoom;
    cout << "Nhap loai phong: ";
    cin >> typeRoom;
    return typeRoom;
}
Hotel HotelView::inputCustomer()
{
    Person person;
    Hotel hotel;
    cout << "___________Nhap thong tin khach hang:___________" << endl;
    person.setName(inputPersonName());
    person.setAge(inputPersonAge());
    person.setPassport(inputPersonPassport());
    hotel.setPerson(person);
    hotel.setNumRent(inputHotelNumRent());
    hotel.setTypeRoom(inputHotelTypeRoom());
    return hotel;
}
int HotelView::inputNumCustomerAdd()
{
    int num;
    cout << "Nhap so khach hang can them: ";
    cin >> num;
    return num;
}
string HotelView::inputPassportDelete()
{
    string passport;
    cout << "Nhap CMND cua khach hang can xoa: ";
    cin.ignore();
    getline(cin, passport);
    return passport;
}
string HotelView::inputPassportCalculate()
{
    string passport;
    cout << "Nhap CMND cua khach hang can tinh tien: ";
    cin.ignore();
    getline(cin, passport);
    return passport;
}
string HotelView::convertIntToString(int typeRoom)
{
    string room;
    if(typeRoom == 1)
    {
        room = "A";
    }
    else if(typeRoom == 2)
    {
        room = "B";
    }
    else if(typeRoom == 3)
    {
        room = "C";
    }
    return room;
}
void HotelView::printInfoPerson(Person person)
{
    cout << "Ten: " << person.getName() << endl;
    cout << "Tuoi: " << person.getAge() << endl;
    cout << "CMND: " << person.getPassport() << endl;
}
void HotelView::printInfoCustomer(Person person, int numRent, int typeRoom)
{
    cout << "_________ Thong tin khach hang:____________" << endl;
    printInfoPerson(person);
    cout << "Loai phong: " << convertIntToString(typeRoom) << endl;
    cout << "So ngay thue: " << numRent <<endl;
}
void HotelView::printPriceRent(long money)
{
    cout << "Tong tien: " << money << endl;
}