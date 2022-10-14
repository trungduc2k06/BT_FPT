#include "HotelController.h"

HotelController::HotelController()
{

}
HotelController::~HotelController()
{

}
void HotelController::addCustomer()
{
    int numCusAdd = m_hotelview.inputNumCustomerAdd();
    for (int i = 0; i < numCusAdd; i++)
    {
        Hotel* hotel = new Hotel(m_hotelview.inputCustomer());
        pHotel.push_back(hotel);
    }
    
}
void HotelController::showCustomer()
{
    for (int i = 0; i < pHotel.size(); i++)
    {
        m_hotelview.printInfoCustomer(pHotel[i]->getPerson(), pHotel[i]->getNumRent(), pHotel[i]->getTypeRoom());
    }
    
}
void HotelController::deleteCustomer()
{
    string passportDelete = m_hotelview.inputPassportDelete();
    for (int i = 0; i < pHotel.size(); i++)
    {
        if(m_hotel.getPassport(pHotel[i]->getPerson()) == passportDelete)
        {
            pHotel.erase(pHotel.begin() + i);
            
        }
    }
}
void HotelController::calculateRoomRentPrice()
{
    long bill;
    string passport = m_hotelview.inputPassportCalculate();
    for (int i = 0; i < pHotel.size(); i++)
    {
        if(m_hotel.getPassport(pHotel[i]->getPerson()) == passport)
        {
            if(pHotel[i]->getTypeRoom() == roomA)
            {
                bill = pHotel[i]->getNumRent() * priceA;
            }
            if(pHotel[i]->getTypeRoom() == roomB)
            {
                bill = pHotel[i]->getNumRent() * priceB;
            }
            if(pHotel[i]->getTypeRoom() == roomC)
            {
                bill = pHotel[i]->getNumRent() * priceC;
            }
            m_hotelview.printInfoCustomer(pHotel[i]->getPerson(), pHotel[i]->getNumRent(), pHotel[i]->getTypeRoom());
            m_hotelview.printPriceRent(bill);
        }
    }
    
}