#ifndef _HOTELCONTROLLER_H_
#define _HOTELCONTROLLER_H_

#include "HotelView.h"
#include <vector>
#define priceA 500
#define priceB 300
#define priceC 100

class HotelController
{
    private:
        vector<Hotel*> pHotel;
        Hotel m_hotel;
        HotelView m_hotelview;
    public:
        HotelController();
        ~HotelController();
        void addCustomer();
        void showCustomer();
        void deleteCustomer();
        void calculateRoomRentPrice();
};


#endif