#ifndef _RECEIPT_H_
#define _RECEIPT_H_

#include "Customer.h"

class Receipt
{
private:
    Customer m_customer;
    int m_pastElectricIndex;
    int m_newElectricIndex;
    int m_payMoney;
public:
    Receipt();
    Receipt(Customer , int, int, int);
    Receipt(Receipt& receipt);
    ~Receipt();
    void setCustomer(Customer);
    Customer getCustomer();
    void setPastElectricIndex(int);
    int getPastElectricIndex();
    void setNewElectricIndex(int);
    int getNewElectricIndex();
    void setPayMoney(int);
    int getPayMoney();
    int getElecId(Customer);
};

#endif