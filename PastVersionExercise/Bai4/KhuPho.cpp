#include "KhuPho.h"

KhuPho::KhuPho()
{
    
}
KhuPho::KhuPho(vector<HoGiaDinh*> hoGD)
{
    pHoGiaDinh = hoGD;
}
KhuPho::~KhuPho()
{
    for (int i = 0; i < pHoGiaDinh.size(); i++)
    {
        delete pHoGiaDinh[i];
    }
}
void KhuPho::setHoGD(vector<HoGiaDinh*> hoGD)
{
    pHoGiaDinh = hoGD;
}
vector<HoGiaDinh*> KhuPho::getHoGD()
{
    return pHoGiaDinh;
}