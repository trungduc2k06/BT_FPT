#include "VanBanIO.h"

string VanBanIO::inputString()
{
    string chuoiKyTu;
    cout << "Nhap chuoi ky tu: ";
    cin.ignore();
    getline(cin, chuoiKyTu);
    return chuoiKyTu;
}
void VanBanIO::printString(string chuoiKyTu)
{
    cout << "Chuoi ky tu: " << chuoiKyTu << endl;
}
void VanBanIO::printTongSoTu(int num)
{
    cout << "Tong so tu cua chuoi: " << num << endl;
}
void VanBanIO::printTongSoKyTu(int num)
{
    cout << "Tong so ky tu cua chuoi: " << num << endl;
}
void VanBanIO::printEmptyString()
{
    cout << "Chuoi rong!" << endl;
}