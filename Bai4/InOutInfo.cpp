#include "InOutInfo.h"

void Nguoi::nhapThongTinCaNhan()
{
    cout << "________________INFORMATION__________________"   << endl;
    cout << "_________ Nhap thong tin nguoi dan:__________" << endl;
    cin.ignore(32767, '\n');
    cout << "Ho va ten: " ;
    getline(cin, m_hoTen);
    cout << "Tuoi: ";
    cin >> m_tuoi;
    cin.ignore(32767, '\n');
    cout << "Nghe Nghiep: ";
    getline(cin, m_ngheNghiep);
    cout << " CMND: ";
    getline(cin, m_soCMND);
}
void Nguoi::xuatThongTinCaNhan()
{
    cout << "________________INFORMATION__________________" << endl;
    cout << "_________ Xuat thong tin nguoi dan:__________" << endl;
    cout << "Ho va ten: " << m_hoTen << endl;
    cout << "Tuoi: " << m_tuoi << endl;
    cout << "Nghe nghiep: " << m_ngheNghiep << endl;
    cout << "CMND: " << m_soCMND << endl;
}
void KhuPho::nhapThongTinKhuPho(int soHoGD)
{
    cout << "NHAP THONG TIN KHU PHO" << endl;
    for(int i = 0; i < soHoGD; i++)
    {
        HoGiaDinh* pHoGD = new HoGiaDinh();
        pHoGD -> nhapThongTinGiaDinh();
        pHoGiaDinh.push_back(pHoGD);
    }
}
void KhuPho::xuatThongTinKhuPho()
{
    cout << "XUAT THONG TIN KHU PHO" << endl;
    for (int i = 0; i < pHoGiaDinh.size(); i++)
    {
        pHoGiaDinh[i]->xuatThongTinGiaDinh();
    }
    
}
void HoGiaDinh::nhapThongTinGiaDinh()
{
    cout << "NHAP THONG TIN HO GIA DINH" << endl;
    int soThanhVien;
    cout << "Nhap so thanh vien trong gia dinh:";
    cin  >> soThanhVien;
    for (int i = 0; i < soThanhVien; i++)
    {
        Nguoi* pNguoi = new Nguoi();
        pNguoi -> nhapThongTinCaNhan();
        pThanhVien.push_back(pNguoi);
    }
    cout << "So Nha: ";
    cin >> m_soNha;
}
void HoGiaDinh::xuatThongTinGiaDinh()
{
    cout << "XUAT THONG TIN HO GIA DINH" << endl;
    cout << "So nha: " << m_soNha << endl;
    for (int i = 0; i < pThanhVien.size(); i++)
    {
        pThanhVien[i] ->xuatThongTinCaNhan();
    }
    
}