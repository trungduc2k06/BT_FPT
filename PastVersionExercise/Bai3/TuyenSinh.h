#ifndef _TUYENSINH_H_
#define _TUYENSINH_H_

#include <iostream>
#include <stdio.h>
#include <vector>
#include "ThiSinh.h"
#include "ThiSinhKhoiA.h"
#include "ThiSinhKhoiB.h"
#include "ThiSinhKhoiC.h"

using namespace std;

void themMoiThiSinh(vector<ThiSinh*>& pThiSinh, int n);
void hienThiThongTin(vector<ThiSinh*>& pThiSinh);
void timKiemThiSinhTheoSBD(vector<ThiSinh*>& pThiSinh, string soBaoDanh);

void themMoiThiSinh(vector<ThiSinh*>& pThiSinh, int n)
{
    int typeKhoiThi;
    for(int i = 0; i < n; i++)
    {
        cout << "Chon thong tin thi sinh: " << endl;
        cout << "1. Khoi A" << endl;
        cout << "2. Khoi B" << endl;
        cout << "3. Khoi C" << endl;
        cout << "Chon: ";
        cin >> typeKhoiThi;

        ThiSinh* p = NULL;

        if(typeKhoiThi == khoiA)
        {
            p = new ThiSinhKhoiA();
            pThiSinh.push_back(p);
        }
        if(typeKhoiThi == khoiB)
        {
            p = new ThiSinhKhoiB();
            pThiSinh.push_back(p);
        }
        if(typeKhoiThi == khoiC)
        {
            p = new ThiSinhKhoiC();
            pThiSinh.push_back(p);
        }
        if(p != NULL) p -> nhapThongTin();
    }
}

void hienThiThongTin(vector<ThiSinh*>& pThiSinh)
{
    cout << "----------Thong tin thi sinh----------"<< endl;
    for(int i = 0; i < pThiSinh.size(); i++)
    {
        pThiSinh[i] ->xuatThongTin();
        if(pThiSinh[i]->getType() == khoiA)
        {
            cout << "Khoi thi: Khoi A" << endl;
        }
        else if(pThiSinh[i]->getType() == khoiB)
        {
            cout << "Khoi thi: Khoi B" << endl;
        }
        else if(pThiSinh[i]->getType() == khoiC)
        {
            cout << "Khoi thi: Khoi C" << endl;
        }
        else
            break;
    }
}

void timKiemThiSinhTheoSBD(vector<ThiSinh*>& pThiSinh, string soBaoDanh)
{
    for(int i = 0; i < pThiSinh.size(); i++)
    {
        if(pThiSinh[i]->getSoBaoDanh() == soBaoDanh)
        {
            pThiSinh[i] -> xuatThongTin();
        }
    }
}

#endif