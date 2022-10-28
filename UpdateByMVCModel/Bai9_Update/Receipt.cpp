#include "Receipt.h"

Receipt::Receipt()
{
    m_pastElectricIndex = 0;
    m_newElectricIndex = 0;
    m_payMoney = 0;
}
Receipt::Receipt(Customer customer, int pastElectricIndex, int newElectricIndex, int payMoney)
{
    m_customer = customer;
    m_pastElectricIndex = pastElectricIndex;
    m_newElectricIndex = newElectricIndex;
    m_payMoney = payMoney;
}
Receipt::Receipt(Receipt& receipt)
{
    m_customer = receipt.m_customer;
    m_pastElectricIndex = receipt.m_pastElectricIndex;
    m_newElectricIndex = receipt.m_newElectricIndex;
    m_payMoney = receipt.m_payMoney;
}
Receipt::~Receipt()
{

}
void Receipt::setCustomer(Customer customer)
{
    m_customer = customer;
}
Customer Receipt::getCustomer()
{
    return m_customer;
}
void Receipt::setPastElectricIndex(int pastElectricIndex)
{
    m_pastElectricIndex = pastElectricIndex;
}
int Receipt::getPastElectricIndex()
{
    return m_pastElectricIndex;
}
void Receipt::setNewElectricIndex(int newElectricIndex)
{
    m_newElectricIndex = newElectricIndex;
}
int Receipt::getNewElectricIndex()
{
    return m_newElectricIndex;
}
void Receipt::setPayMoney(int payMoney)
{
    m_payMoney = payMoney;
}
int Receipt::getPayMoney()
{
    m_payMoney = (m_newElectricIndex - m_pastElectricIndex) * 5;
    return m_payMoney;
}
int Receipt::getElecId(Customer customer)
{
    return customer.getElectricId();
}