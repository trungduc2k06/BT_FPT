#include "ReceiptController.h"

ReceiptController::ReceiptController()
{

}
ReceiptController::~ReceiptController()
{

}
void ReceiptController::addReceipt()
{
    int numAddReceipt = m_receiptIO.inputNumReceiptAdd();
    for(int i = 0; i < numAddReceipt; i++)
    {
        Receipt* receipt = new Receipt(m_receiptIO.inputReceipt());
        pReceipt.push_back(receipt);
    }
}
void ReceiptController::deleteReceipt()
{
    bool check = 0;
    int ElecIdDelete = m_receiptIO.inputElecIdDelete();
    for (int i = 0; i < pReceipt.size(); i++)
    {
        if(m_receipt.getElecId(pReceipt[i]->getCustomer()) == ElecIdDelete)
        {
            pReceipt.erase(pReceipt.begin() + i);
            check = 1;
        }
    }
    m_checkValidate.printCheckIdCardFind(check);
}
void ReceiptController::showReceipt()
{
    for (int i = 0; i < pReceipt.size(); i++)
    {
        m_receiptIO.printInfoReceipt(pReceipt[i]->getCustomer(), pReceipt[i]->getPastElectricIndex(), pReceipt[i]->getNewElectricIndex(), pReceipt[i]->getPayMoney());
    }
}