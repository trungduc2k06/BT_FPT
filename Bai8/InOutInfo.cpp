#include "InOutInfo.h"

//Class SinhVien
void SinhVien::nhapThongTinSinhVien()
{
    cout << "________________INFORMATION__________________"   << endl;
    cout << "_________ Nhap thong tin sinh vien:__________" << endl;
    cin.ignore(32767, '\n');
    cout << "Nhap ho va ten: ";     
    getline(cin, m_hoTen);
    cout << "Nhap tuoi: ";       
    cin >> m_tuoi;
    cin.ignore(32767, '\n');
    cout << "Nhap lop: ";   
    getline(cin, m_lop);
}
void SinhVien::xuatThongTinSinhVien()
{
    cout << "________________INFORMATION__________________"   << endl;
    cout << "_________ Xuat thong tin sinh vien:__________" << endl;
    cout << "Ho va ten: "<< m_hoTen << endl;
    cout << "Tuoi: " << m_tuoi << endl;
    cout << "Lop: " << m_lop << endl;
}
//Class TheMuon
void TheMuon::nhapThongTinSinhVien()
{
    SinhVien::nhapThongTinSinhVien();
    cout << "Nhap ma phieu muon: ";
    cin >> m_maPhieuMuon;
    cout << "Nhap ngay muon: ";
    cin >> m_ngayMuon;
    cout << "Nhap ngay tra: ";
    cin >> m_ngayTra;
    cout << "Nhap so hieu sach: ";
    cin >> m_soHieuSach;
}
void TheMuon::xuatThongTinSinhVien()
{
    SinhVien::xuatThongTinSinhVien();
    cout << "Ma phieu muon: " << m_maPhieuMuon << endl;
    cout << "Ngay muon: " << m_ngayMuon << endl;
    cout << "Ngay tra: " << m_ngayTra << endl;
    cout << "So hieu sach: " << m_soHieuSach << endl;
}