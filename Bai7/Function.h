#include "QLGV.h"
#include <vector>

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
    vector<CBGV*> pCBGV;

    while (flag)
    {
        cout << "_____________ HE THONG QUAN LY GIAO VIEN _____________" << endl;
        cout << "1. Them moi giao vien." << endl;
        cout << "2. Xoa giao vien." << endl;
        cout << "3. Hien thi thong tin." << endl;
        cout << "4. Thoat khoi chuong trinh." << endl;

        cout << "Chon yeu cau can thuc hien:  ";
        cin >> choice;  
        switch(choice)
        {
            case choice_1:
            {
                int n = 0;
                cout << "1. Them moi giao vien." << endl;
                cout << "Nhap so luong giao vien: ";
                cin >> n;
                themMoiGiaoVien(pCBGV, n);
                break;
            }
            case choice_2:
            {
                int maGV;
                cout << "2. Xoa giao vien." << endl;
                cout << "Nhap ma so giao vien: ";
                cin >> maGV;
                xoaGiaoVien(pCBGV, maGV);
                break;
            }
            case choice_3:
            {
                cout << "3. Hien thi thong tin." << endl;
                hienThiGiaoVien(pCBGV);
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