#include "TuyenSinh.h"
#include <vector>

int main()
{
    bool flag = 1;
    int choice = 0;
    vector<ThiSinh*> pThiSinh;

    while (flag)
    {
        cout << "_____________ HE THONG QUAN LY THONG TIN THI SINH _____________" << endl;
        cout << "1. Them moi thi sinh." << endl;
        cout << "2. Hien thi thong tin cua thi sinh va khoi thi." << endl;
        cout << "3. Tim kiem thi sinh theo so bao danh" << endl;
        cout << "4. Thoat khoi chuong trinh" << endl;

        cout << "Chon yeu cau can thuc hien" << endl;
        cin >> choice;  
        switch(choice)
        {
            case 1:
            {
                int n = 0;
                cout << "1. Them moi thi sinh." << endl;
                cout << "Nhap so luong thi sinh nhap moi: ";
                cin >> n;
                themMoiThiSinh(pThiSinh, n);
                break;
            }
            case 2:
            {
                cout << "2. Hien thi thong tin cua thi sinh va khoi thi." << endl;
                hienThiThongTin(pThiSinh);
                break;
            }
            case 3:
            {
                string soBaoDanh;
                cout << "3. Tim kiem thi sinh theo so bao danh" << endl;
                cout << "Nhap so bao danh muon tim kiem: "; 
                getline(cin, soBaoDanh);
                cin.ignore(32767, '\n');
                timKiemThiSinhTheoSBD(pThiSinh, soBaoDanh);
                break;
            }
            case 4:
            {
                cout << "4. Thoat khoi chuong trinh" << endl;
                flag = 0;
                break;
            }
            default:
                break;
        }
    }
    return 0;
}
