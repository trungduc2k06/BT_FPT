#ifndef _HOTELVIEW_H_
#define _HOTELVIEW_H_

#include "Hotel.h"

class HotelView
{
    public:
        string inputPersonName();
        int inputPersonAge();
        string inputPersonPassport();
        int inputHotelNumRent();
        int inputHotelTypeRoom();
        Hotel inputCustomer();
        int inputNumCustomerAdd();
        string inputPassportDelete();
        string inputPassportCalculate();
        string convertIntToString(int);
        void printInfoPerson(Person);
        void printInfoCustomer(Person , int, int);
        void printPriceRent(long);
};

#endif