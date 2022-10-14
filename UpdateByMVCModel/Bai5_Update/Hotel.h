#ifndef _HOTEL_H_
#define _HOTEL_H_

#include "Person.h"
enum typeRoomRent
{
    roomA = 1,
    roomB, 
    roomC,
};
class Hotel
{
    private:
        Person m_person;
        int m_numRent;
        int m_typeRoom;
    public:
        Hotel();
        Hotel(Person person, int numRent, int typeRoom);
        Hotel(Hotel& hotel);
        ~Hotel();
        void setPerson(Person person);
        Person getPerson();
        string getPassport(Person);
        void setNumRent(int numRent);
        int getNumRent();
        void setTypeRoom(int typeRoom);
        int getTypeRoom();
};


#endif