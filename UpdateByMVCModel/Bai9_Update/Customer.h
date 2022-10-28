#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

#include <iostream>
#include <string>

using namespace std;

class Customer
{
private:
    string m_name;
    string m_address;
    int m_electricId;
public:
    Customer();
    Customer(string ,string ,int);
    Customer(Customer& customer);
    ~Customer();
    void setName(string);
    string getName();
    void setAddress(string);
    string getAddress();
    void setElectricId(int);
    int getElectricId();
};

#endif