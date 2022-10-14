#include "QLS.h"
#include <vector>

int main()
{
    bool flag = 1;
    int choice = 0;
    vector<TaiLieu*> pTaiLieu;

    while(flag)
    {
        cout << "_____________ HE THONG QUAN LY TAI LIEU _____________" << endl;
        cout << "1. Them tai lieu. " << endl;
        cout << "2. Xoa tai lieu theo ma." << endl;
        cout << "3. Hien thi thong tin ve tai lieu." << endl;
        cout << "4. Tim kiem tai lieu theo loai." << endl;
        cout << "5. Thoat khoi chuowng trinh" << endl;

        cout << "Chon yeu cau can thuc hien ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int n = 0;
            cout << "1. Them moi tai lieu." << endl;
            cout << "Nhap so luong tai lieu nhap moi: ";
            cin >> n;
            themMoiTaiLieu(pTaiLieu, n);
            break;
        }    
        case 2:
        {
            int maTaiLieu;
            cout << "2. Xoa tai lieu theo ma." << endl;
            cout << "Nhap ma tai lieu muon xoa: ";
            cin >> maTaiLieu;
            xoaTaiLieuTheoMa(pTaiLieu, maTaiLieu);
            break;
        }
        case 3:
        {
            cout << "3. Hien thi thong tin ve tai lieu." << endl;
            hienThiThongTinTaiLieu(pTaiLieu);
            break;
        }
        case 4:
        {
            int typeTaiLieu;
            cout << "4. Tim kiem tai lieu theo loai." << endl;
            cout << "1. Sach" << endl;
            cout << "2. Tap chi" << endl;
            cout << "3. Bao" << endl;
            cout << "Nhap loai tai lieu muon tim kiem: "; 
            cin >> typeTaiLieu;
            timKiemTaiLieuTheoLoai(pTaiLieu, typeTaiLieu);
            break;
        }
        case 5:
        {
            cout << "5. Thoat khoi chuong trinh." << endl;
            flag = 0;
            break;
        }
        default:
            break;
        }
    }
    return 0;
}