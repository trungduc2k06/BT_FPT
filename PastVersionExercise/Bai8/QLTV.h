#include "InOutInfo.h"
#include <vector>

void themMoiTheMuon(vector<TheMuon*>& pTheMuon, int n);
void xoaTheMuon(vector<TheMuon*>& pTheMuon, int maPhieuMuon);
void hienThiThongTin(vector<TheMuon*>& pTheMuon);

void themMoiTheMuon(vector<TheMuon*>& pTheMuon, int n)
{
    for (int i = 0; i < n; i++)
    {
        TheMuon* p = new TheMuon;
        p->nhapThongTinSinhVien();
        pTheMuon.push_back(p);
    }
}
void xoaTheMuon(vector<TheMuon*>& pTheMuon, int maPhieuMuon)
{
    for (int i = 0; i < pTheMuon.size(); i++)
    {
        if(pTheMuon[i]->getMaPhieuMuon() == maPhieuMuon)
        {
            pTheMuon.erase(pTheMuon.begin() + i);
        }
    }
}
void hienThiThongTin(vector<TheMuon*>& pTheMuon)
{
    for (int i = 0; i < pTheMuon.size(); i++)
    {
        pTheMuon[i]->xuatThongTinSinhVien();
    }
}