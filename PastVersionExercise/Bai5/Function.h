#include "QLKS.h"
#include <vector>

using namespace std;

enum choiceType
{
    choice_1 = 1,
    choice_2,
    choice_3,
    choice_4,
};

void runProgram()
{
    bool flag = 1;
    int choice = 0;
    vector<KhachSan*> pKhachSan;

    while (flag)
    {
        cout << "_____________ HE THONG QUAN LY KHACH SAN _____________" << endl;
        cout << "1. Them moi khach hang." << endl;
        cout << "2. Xoa khach hang." << endl;
        cout << "3. Gia tien thue phong." << endl;
        cout << "4. Thoat khoi chuong trinh." << endl;

        cout << "Chon yeu cau can thuc hien:  " ;
        cin >> choice;  
        switch(choice)
        {
            case choice_1:
            {
                int n = 0;
                cout << "1. Them moi khach hang."  << endl;
                cout << "Nhap so luong khach hang: ";
                cin >> n;
                themMoiKhachHang(pKhachSan, n);
                hienThiKhachHang(pKhachSan);
                break;
            }
            case choice_2:
            {
                string soCMND;
                cout << "2. Xoa khach hang."  << endl;
                cin.ignore(32767, '\n');
                cout << "Nhap so CMND: ";
                getline(cin, soCMND);
                xoaKhachHang(pKhachSan,soCMND);
                break;
            }
            case choice_3:
            {
                string soCMND;
                cout << "3. Gia tien thue phong."  << endl;
                cin.ignore(32767, '\n');
                cout << "Nhap so CMND: ";
                getline(cin, soCMND);
                giaTienPhong(pKhachSan, soCMND);
                break;
            }
            case choice_4:
            {
                cout << "4. Thoat khoi chuong trinh." << endl;
                flag = 0;
                break;
            }
            default:   
                break;
        }
    }
}