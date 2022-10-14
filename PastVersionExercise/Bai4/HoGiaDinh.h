#ifndef _HOGIADINH_H_
#define _HOGIADINH_H_

#include "Nguoi.h"
#include <vector>
#include <iostream>

using namespace std;

class HoGiaDinh : public Nguoi
{
private:
    vector<Nguoi*> pThanhVien;
    int m_soNha;
public:
    HoGiaDinh();
    HoGiaDinh(vector<Nguoi*> thanhVien, int soNha);
    ~HoGiaDinh();
    void setThanhVien(vector<Nguoi*> thanhVien);
    vector<Nguoi*> getThanhVien();
    void setSoNha(int soNha);
    int getSoNha();
    void nhapThongTinGiaDinh();
    void xuatThongTinGiaDinh();
};

#endif