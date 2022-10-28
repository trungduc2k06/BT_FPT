#include "Customer.h"

Customer::Customer()
{
    m_name = " ";
    m_address = " ";
    m_electricId = 0;
}
Customer::Customer(string name,string address,int electricId)
{
    m_name = name;
    m_address = address;
    m_electricId = electricId;
}
Customer::Customer(Customer& customer)
{
    m_name = customer.m_name;
    m_address = customer.m_address;
    m_electricId = customer.m_electricId;
}
Customer::~Customer()
{

}
void Customer::setName(string name)
{
    m_name = name;
}
string Customer::getName()
{
    return m_name;
}
void Customer::setAddress(string address)
{
    m_address = address;
}
string Customer::getAddress()
{
    return m_address;
}
void Customer::setElectricId(int electricId)
{
    m_electricId = electricId;
}
int Customer::getElectricId()
{
    return m_electricId;
}