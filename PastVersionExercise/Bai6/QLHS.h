#include "InOutInfo.h"
#include <vector>

void themMoiHocSinh(vector<HocSinh*>& pHocSinh, int n);
void hienThiThongTin(vector<HocSinh*>& pHocSinh);
void hienThiThongTinHocSinh20Tuoi(vector<HocSinh*>& pHocSinh);
void soLuongHocSinh23TuoiVaODn(vector<HocSinh*>& pHocSinh);

void themMoiHocSinh(vector<HocSinh*>& pHocSinh, int n)
{
    for(int i = 0; i < n; i++)
    {
        HocSinh* p = new HocSinh;
        p->nhapThongTinHocSinh();
        pHocSinh.push_back(p);
    }
}
void hienThiThongTin(vector<HocSinh*>& pHocSinh)
{
    for(int i = 0; i < pHocSinh.size(); i++)
    {
        pHocSinh[i]->xuatThongTinHocSinh();
    }
}
void hienThiThongTinHocSinh20Tuoi(vector<HocSinh*>& pHocSinh)
{
    vector<HocSinh*> pHS_20;
    for (int i = 0; i < pHocSinh.size(); i++)
    {
        if(pHocSinh[i]->getTuoi() == 20)
        {
            pHS_20.push_back(pHocSinh[i]);
        }
    }
    hienThiThongTin(pHS_20);
}
void soLuongHocSinh23TuoiVaODn(vector<HocSinh*>& pHocSinh)
{
    vector<HocSinh*> pHS_23_DN;
    for (int i = 0; i < pHocSinh.size(); i++)
    {
        if(pHocSinh[i]->getTuoi() == 23 && pHocSinh[i]->getQueQuan() == "DN")
        {
            pHS_23_DN.push_back(pHocSinh[i]);
        }
    }
    cout << "So luong hoc sinh co tuoi 23 va que o DN: " << pHS_23_DN.size() << endl;
    hienThiThongTin(pHS_23_DN);
}