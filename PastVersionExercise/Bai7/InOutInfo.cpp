#include "InOutInfo.h"

//Class Nguoi
void Nguoi::nhapThongTinCaNhan()
{
    cout << "________________INFORMATION__________________"   << endl;
    cout << "_________ Nhap thong tin nguoi dan:__________" << endl;
    cin.ignore(32767, '\n');
    cout << "Nhap ho va ten: " ;
    getline(cin, m_hoTen);
    cout << "Nhap tuoi: ";
    cin >> m_tuoi;
    cin.ignore(32767, '\n');
    cout << "Nhap que quan: ";
    getline(cin, m_queQuan);
    cout << "Nhap ma so giao vien: ";
    cin >> m_maGV;
}
void Nguoi::xuatThongTinCaNhan()
{
    cout << "________________INFORMATION__________________"   << endl;
    cout << "_________ Xuat thong tin nguoi dan:__________" << endl;
    cout << "Ho va ten: " << m_hoTen << endl;
    cout << "Tuoi: " << m_tuoi << endl;
    cout << "Que quan: " << m_queQuan << endl;
    cout << "Ma so giao vien: " << m_maGV << endl;
}
//Class CBGV
void CBGV::nhapThongTinCaNhan()
{
    Nguoi::nhapThongTinCaNhan();
    cout << "Nhap luong cung: ";
    cin >> m_luongCung;
    cout << "Nhap luong thuong: ";
    cin >> m_luongThuong;
    cout << "Nhap tien phat: ";
    cin >> m_tienPhat;
}
void CBGV::xuatThongTinCaNhan()
{
    Nguoi::xuatThongTinCaNhan();
    cout << "Luong cung: " << m_luongCung << endl;
    cout << "Luong thuong: " << m_luongThuong << endl;
    cout << "Tien phat: " << m_tienPhat <<endl;
    cout << "Tong luong: " << getTongLuong() << endl;
}