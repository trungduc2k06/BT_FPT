#include "QLTV.h"
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
    vector<TheMuon*> pTheMuon;

    while (flag)
    {
        cout << "_____________ HE THONG QUAN LY THU VIEN _____________" << endl;
        cout << "1. Them moi the muon." << endl;
        cout << "2. Xoa the muon." << endl;
        cout << "3. Hien thi thong tin the muon." << endl;
        cout << "4. Thoat khoi chuong trinh." << endl;

        cout << "Chon yeu cau can thuc hien:  ";
        cin >> choice;  
        switch(choice)
        {
            case choice_1:
            {
                int n = 0;
                cout << "1. Them moi the muon." << endl;
                cout << "Nhap so luong the muon: ";
                cin >> n;
                themMoiTheMuon(pTheMuon, n);
                break;
            }
            case choice_2:
            {
                int maPhieuMuon;
                cout << "2. Xoa the muon." << endl;
                cout << "Nhap ma phieu muon: ";
                cin >> maPhieuMuon;
                xoaTheMuon(pTheMuon, maPhieuMuon);
                break;
            }
            case choice_3:
            {
                cout << "3. Hien thi thong tin the muon." << endl;
                hienThiThongTin(pTheMuon);
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