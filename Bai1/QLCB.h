#ifndef _QLCB_H_
#define _QLCB_H_

#include <iostream>
#include <stdio.h>
#include <vector>
#include "CanBo.h"
#include "CongNhan.h"
#include "NhanVien.h"
#include "KySu.h"

using namespace std;

void themMoiCanBo(vector<CanBo*>& pCanBo, int n);
void timKiemTheoTen(vector<CanBo*>& pCanBo, string name);
void hienThiThongTin(vector<CanBo*>& pCanBo);

void themMoiCanBo(vector<CanBo*>& pCanBo, int n)
{
    int typeCanBo;
    for(int i = 0; i < n; i++)
    {
        cout << "Chon can bo can nhap thong tin: " << endl;
        cout << "1. Cong nhan" << endl;
        cout << "2. Ky su" << endl;
        cout << "3. Nhan vien" << endl;
        cout << "Chon: ";
        cin >> typeCanBo;
        CanBo* p = NULL;
        
        if(typeCanBo == congNhan)
        {
            p = new CongNhan();
            pCanBo.push_back(p);
        }
        if(typeCanBo == kySu)
        {
            p = new KySu();
            pCanBo.push_back(p);
        }
        if(typeCanBo == nhanVien)
        {
            p = new NhanVien();
            pCanBo.push_back(p);
        }
        if(p != NULL) p->nhapThongTin();
    }
}
void timKiemTheoTen(vector<CanBo*>& pCanBo, string name)
{
    for(int i = 0; i < pCanBo.size(); i++)
    {
        string m_name = pCanBo[i]->getName();
        if(m_name == name)
        {
            pCanBo[i]->xuatThongTin();
        }
    }
}
void hienThiThongTin(vector<CanBo*>& pCanBo)
{
    cout << "----------Thong tin can bo----------"<< endl;
    for (int i = 0; i < pCanBo.size(); i++)
    {
        pCanBo[i]->xuatThongTin();
    }
    
}

#endif 