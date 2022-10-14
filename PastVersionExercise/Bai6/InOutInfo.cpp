#include "InOutInfo.h"

void HocSinh::nhapThongTinHocSinh()
{
    cout << "________________INFORMATION__________________"   << endl;
    cout << "___________ Nhap thong tin hoc sinh:___________" << endl;
    cin.ignore(32767, '\n');
    cout << "Nhap ho va ten: ";     
    getline(cin, m_hoTen);
    cout << "Nhap tuoi: ";       
    cin >> m_tuoi;
    cin.ignore(32767, '\n');
    cout << "Nhap que quan: ";   
    getline(cin, m_queQuan);
}
void HocSinh::xuatThongTinHocSinh()
{
    cout << "________________INFORMATION__________________"   << endl;
    cout << "___________ Xuat thong tin hoc sinh:___________" << endl;
    cout << "Ho va ten: "<< m_hoTen << endl;
    cout << "Tuoi: " << m_tuoi << endl;
    cout << "Que quan: " << m_queQuan << endl;
}