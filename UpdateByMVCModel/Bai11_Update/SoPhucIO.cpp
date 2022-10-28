#include "SoPhucIO.h"

int SoPhucIO::inputReal()
{
    int real;
    cout << "Nhap phan thuc: ";
    cin >> real;
    return real;
}
int SoPhucIO::inputComp()
{
    int comp;
    cout << "Nhap phan ao: ";
    cin >> comp;
    return comp;
}
SoPhuc SoPhucIO::inputSoPhuc()
{
    SoPhuc sophuc;
    cout << "Nhap so thuc:" << endl;
    sophuc.setReal(inputReal());
    sophuc.setComp(inputComp());
    return sophuc;
}
void SoPhucIO::printSoPhuc(int real, int comp)
{
    cout << "So thuc: " << real << " + " << comp << "i" << endl;
}
void SoPhucIO::printAdd(int real, int comp)
{
    cout << endl << "Tong 2 so thuc: " << real << " + " << comp << "i" << endl;
}
void SoPhucIO::printSub(int real, int comp)
{
    cout << endl << "Hieu 2 so thuc: " << real << " + " << comp << "i" << endl;
}
void SoPhucIO::printMulti(int real, int comp)
{
    cout << endl << "Nhan 2 so thuc: " << real << " + " << comp << "i" << endl;
}