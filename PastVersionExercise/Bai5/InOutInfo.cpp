#include "InOutInfo.h"

//Class Nguoi
void Nguoi::nhapThongTinCaNhan()
{
    cout << "________________INFORMATION__________________"   << endl;
    cout << "_________ Nhap thong tin ca nhan:____________" << endl;
    cin.ignore(32767, '\n');
    cout << "Ho va ten: " ;
    getline(cin, m_hoTen);
    cout << "Tuoi: ";
    cin >> m_tuoi;
    cin.ignore(32767, '\n');
    cout << " CMND: ";
    getline(cin, m_soCMND);
}
void Nguoi::xuatThongTinCaNhan()
{
    cout << "________________INFORMATION__________________" << endl;
    cout << "_________ Xuat thong tin ca nhan:____________" << endl;
    cout << "Ho va ten: " << m_hoTen << endl;
    cout << "Tuoi: " << m_tuoi << endl;
    cout << "CMND: " << m_soCMND << endl;
}
//Class Khach san
void KhachSan::nhapThongTinCaNhan()
{
    Nguoi::nhapThongTinCaNhan();
    cout << "Nhap loai phong: ";
    cin >> m_roomType;
    cout << "Nhap so ngay thue: ";
    cin >> m_soNgayThue;
}
void KhachSan::xuatThongTinCaNhan()
{
    Nguoi::xuatThongTinCaNhan();
    cout << "Loai phong: " << m_roomType << endl;
    cout << "So ngay thue: " << m_soNgayThue << endl;
}