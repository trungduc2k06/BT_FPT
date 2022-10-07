#include "QLCB.h"
#include <vector>

int main()
{
    bool flag = 1;
    int choice = 0;
    vector<CanBo*> pCanBo;

    while (flag)
    {
        cout << "_____________ HE THONG QUAN LY CAN BO _____________" << endl;
        cout << "1. Nhap moi can bo" << endl;
        cout << "2. Tim can bo theo ho ten" << endl;
        cout << "3. Hien thi thong tin ve danh sach can bo" << endl;
        cout << "4. Thoat khoi chuong trinh" << endl;

        cout << "Chon yeu cau can thuc hien: " ;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int n = 0;
            cout << "1. Nhap moi can bo" << endl;
            cout << "Nhap so luong can bo nhap moi: ";
            cin >> n;
            cin.ignore(32767, '\n');
            themMoiCanBo(pCanBo, n);
            break;
        }
        case 2:
        {
            string name = " ";
            cout << "2. Tim can bo theo ho ten." << endl;
            cout << "Nhap ho va ten can bo: ";
            getline(cin, name);
            timKiemTheoTen(pCanBo, name);
            break;
        }
        case 3:
        {
            cout << "3. Hien thi thong tin ve danh sach can bo" << endl;
            hienThiThongTin(pCanBo);
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