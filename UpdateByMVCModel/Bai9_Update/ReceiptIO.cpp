#include "ReceiptIO.h"

string ReceiptIO::inputCustomerName()
{
    string name;
    cout << "Nhap ten khach hang: ";
    cin.ignore();
    getline(cin, name);
    return name;
}
string ReceiptIO::inputCustomerAddress()
{
    string address;
    cout << "Nhap dia chi khach hang: ";
    cin.ignore();
    getline(cin, address);
    return address;
}
int ReceiptIO::inputCustomerElectricId()
{
    int electricId;
    cout << "Nhap ma so cong to dien: ";
    cin >> electricId;
    return electricId;
}
int ReceiptIO::inputReceiptPastElecIndex()
{
    int pastElecIndex;
    cout << "Nhap chi so dien cu: ";
    cin >> pastElecIndex;
    return pastElecIndex;
}
int ReceiptIO::inputReceiptNewElecIndex()
{
    int newElecIndex;
    cout << "Nhap chi so dien moi: ";
    cin >> newElecIndex;
    return newElecIndex;
}
int ReceiptIO::inputNumReceiptAdd()
{
    int num;
    cout << "Nhap so hoa don can them: ";
    cin >> num;
    return num;
}
int ReceiptIO::inputElecIdDelete()
{
    int id;
    cout << "Nhap ma so cong to dien can xoa: ";
    cin >> id;
    return id;
}
Receipt ReceiptIO::inputReceipt()
{
    Customer customer;
    Receipt receipt;
    cout << "___________Nhap thong tin bien lai:___________" << endl;
    customer.setName(inputCustomerName());
    customer.setAddress(inputCustomerAddress());
    customer.setElectricId(inputCustomerElectricId());
    receipt.setCustomer(customer);
    receipt.setPastElectricIndex(inputReceiptPastElecIndex());
    receipt.setNewElectricIndex(inputReceiptNewElecIndex());
    return receipt;
}

void ReceiptIO::printInfoCustomer(string name, string address, int elecId)
{
    cout << "Ho ten: "<< name << endl;
    cout << "So nha: " << address << endl;
    cout << "Ma so cong to dien: " << elecId << endl;
}
void ReceiptIO::printInfoReceipt(Customer customer, int pastElecIndex, int newElecIndex, int payMoney)
{
    cout << "___________Thong tin bien lai:___________" << endl;
    printInfoCustomer(customer.getName(), customer.getAddress(), customer.getElectricId());
    cout << "Chi so dien cu: " << pastElecIndex << endl;
    cout << "Chi so dien moi: " << newElecIndex << endl;
    cout << "Gia tien phai tra: " << payMoney << endl;
}