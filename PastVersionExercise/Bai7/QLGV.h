#ifndef _QLGV_H_
#define _QLGV_H_

#include "InOutInfo.h"
#include <vector>

void themMoiGiaoVien(vector<CBGV*>& pCBGV, int n);
void xoaGiaoVien(vector<CBGV*>& pCBGV, int maGV);

void themMoiGiaoVien(vector<CBGV*>& pCBGV, int n)
{
    for(int i = 0; i < n; i++)
    {
        CBGV* p = new CBGV;
        p->nhapThongTinCaNhan();
        pCBGV.push_back(p);
    }
}
void hienThiGiaoVien(vector<CBGV*>& pCBGV)
{
    for (int i = 0; i < pCBGV.size(); i++)
    {
        pCBGV[i]->xuatThongTinCaNhan();
    }
    
}
void xoaGiaoVien(vector<CBGV*>& pCBGV, int maGV)
{
    for(int i = 0; i < pCBGV.size(); i++)
    {
        if(pCBGV[i]->getmaGV() == maGV)
        {
            pCBGV.erase(pCBGV.begin() + i);
        }
    }
}

#endif