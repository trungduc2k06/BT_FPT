#ifndef _QLKS_H_
#define _QLKS_H_

// #include "Nguoi.h"
// #include "KhachSan.h"
#include <vector>
#include <iostream>
#include <stdio.h>
#include "InOutInfo.h"

using namespace std;

void themMoiKhachHang(vector<KhachSan*>& pKhachSan, int n);
void xoaKhachHang(vector<KhachSan*>& pKhachSan, string soCMND);
void giaTienPhong(vector<KhachSan*>& pKhachSan, string soCMND);

void themMoiKhachHang(vector<KhachSan*>& pKhachSan, int n)
{
    for (int i = 0; i < n; i++)
    {
        KhachSan* p = new KhachSan;
        p->nhapThongTinCaNhan();
        pKhachSan.push_back(p);

    }
} 
void hienThiKhachHang(vector<KhachSan*>& pKhachSan)
{
    for(int i = 0; i < pKhachSan.size(); i++)
    {
        pKhachSan[i]->xuatThongTinCaNhan();
    }
}
void xoaKhachHang(vector<KhachSan*>& pKhachSan, string soCMND)
{
    for(int i = 0; i < pKhachSan.size(); i++)
    {
        if(pKhachSan[i]->getSoCMND() == soCMND)
        {
            pKhachSan.erase(pKhachSan.begin() + i);
        }
    }
}
void giaTienPhong(vector<KhachSan*>& pKhachSan, string soCMND)
{
    long long bill;
    for(int i = 0; i < pKhachSan.size(); i++)
    {
        if(pKhachSan[i]->getSoCMND() == soCMND)
        {
            if(pKhachSan[i]->getRoomType() == loaiA)
            {
                bill = pKhachSan[i]->getSoNgayThue() * priceA;
            }
            if(pKhachSan[i]->getRoomType() == loaiB)
            {
                bill = pKhachSan[i]->getSoNgayThue() * priceB;
            }
            if(pKhachSan[i]->getRoomType() == loaiC)
            {
                bill = pKhachSan[i]->getSoNgayThue() * priceC;
            }
            pKhachSan[i]->xuatThongTinCaNhan();
            cout << "Tong tien: " << bill << endl;
        }
    }
}

#endif