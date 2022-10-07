#ifndef _QLS_H_
#define _QLS_H_

#include <iostream>
#include <stdio.h>
#include <vector>
#include "TaiLieu.h"
#include "TapChi.h"
#include "Bao.h"
#include "Sach.h"

using namespace std;

void themMoiTaiLieu(vector<TaiLieu*>& pTaiLieu, int n);
void xoaTaiLieuTheoMa(vector<TaiLieu*>& pTaiLieu, int maTaiLieu);
void hienThiThongTinTaiLieu(vector<TaiLieu*>& pTaiLieu);
void timKiemTaiLieuTheoLoai(vector<TaiLieu*>& pTaiLieu, int typeTaiLieu);

void themMoiTaiLieu(vector<TaiLieu*>& pTaiLieu, int n)
{
    int typeTaiLieu;
    for(int i = 0; i < n; i++)
    {
        cout << "Chon loai tai lieu can nhap: " << endl;
        cout << "1. Sach" << endl;
        cout << "2. Tap chi" << endl;
        cout << "3. Bao" << endl;
        cout << "Chon: ";
        cin >> typeTaiLieu;

        TaiLieu* p = NULL;
        
        if(typeTaiLieu == sach)
        {
            p = new Sach();
            pTaiLieu.push_back(p);
        }
        if(typeTaiLieu == tapChi)
        {
            p = new TapChi();
            pTaiLieu.push_back(p);
        }
        if(typeTaiLieu == bao)
        {
            p = new Bao();
            pTaiLieu.push_back(p);
        }
        if(p != NULL) p->nhapThongTin();
    }
}

void xoaTaiLieuTheoMa(vector<TaiLieu*>& pTaiLieu, int maTaiLieu)
{
    for(int i = 0; i < pTaiLieu.size(); i++)
    {
        if(pTaiLieu[i]->getMaTaiLieu() == maTaiLieu)
        {
            pTaiLieu.erase(pTaiLieu.begin() + i);
            break;
        }
    }
}

void hienThiThongTinTaiLieu(vector<TaiLieu*>& pTaiLieu)
{
    cout << "----------Thong tin tai lieu----------"<< endl;
    for(int i = 0; i < pTaiLieu.size(); i++)
    {
        pTaiLieu[i]->xuatThongTin();
    }
}

void timKiemTaiLieuTheoLoai(vector<TaiLieu*>& pTaiLieu, int typeTaiLieu)
{
    vector<TaiLieu*> pTypeTaiLieu;
    for(int i = 0; i < pTaiLieu.size(); i++)
    {
        int m_typeTaiLieu = pTaiLieu[i]->getType();
        if(m_typeTaiLieu == typeTaiLieu)
        {
            pTypeTaiLieu.push_back(pTaiLieu[i]);
        }
    }
    hienThiThongTinTaiLieu(pTypeTaiLieu);
}

#endif