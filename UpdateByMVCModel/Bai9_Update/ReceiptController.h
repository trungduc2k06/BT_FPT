#ifndef _RECEIPTCONTROLLER_H_
#define _RECEIPTCONTROLLER_H_

#include "ReceiptIO.h"
#include <vector>
#include "CheckValidate.h"

class ReceiptController
{
private:
    vector<Receipt*> pReceipt;
    ReceiptIO m_receiptIO;
    Receipt m_receipt;
    CheckValidate m_checkValidate;
public:
    ReceiptController();
    ~ReceiptController();
    void addReceipt();
    void deleteReceipt();
    void showReceipt();
};

#endif