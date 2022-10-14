#include "Hotel.h"

Hotel::Hotel()
{
    m_numRent = 0;
    m_typeRoom = 0;
}
Hotel::Hotel(Person person, int numRent, int typeRoom)
{
    m_person = person;
    m_numRent = numRent;
    m_typeRoom = typeRoom;
}
Hotel::Hotel(Hotel& hotel)
{
    m_person = hotel.m_person;
    m_numRent = hotel.m_numRent;
    m_typeRoom = hotel.m_typeRoom;
}
Hotel::~Hotel()
{

}
void Hotel::setPerson(Person person)
{
    m_person = person;
}
Person Hotel::getPerson()
{
    return m_person;
}
string Hotel::getPassport(Person person)
{
    return person.getPassport();
}
void Hotel::setNumRent(int numRent)
{
    m_numRent = numRent;
}
int Hotel::getNumRent()
{
    return m_numRent;
}
void Hotel::setTypeRoom(int typeRoom)
{
    m_typeRoom = typeRoom;
}
int Hotel::getTypeRoom()
{
    return m_typeRoom;
}