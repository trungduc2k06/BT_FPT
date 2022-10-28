#ifndef _RECEIPTIO_H_
#define _RECEIPTIO_H_

#include "Receipt.h"

class ReceiptIO
{

    public:
        //Input
        string inputCustomerName();
        string inputCustomerAddress();
        int inputCustomerElectricId();
        int inputReceiptPastElecIndex();
        int inputReceiptNewElecIndex();
        int inputNumReceiptAdd();
        int inputElecIdDelete();
        Receipt inputReceipt();
        //Output
        void printInfoCustomer(string, string, int);
        void printInfoReceipt(Customer, int, int, int);
};

#endif