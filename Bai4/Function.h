#include <iostream>
#include "KhuPho.h"
#include "HoGiaDinh.h"
#include "Nguoi.h"
#include "InOutInfo.h" 

void runProgram()
{
    int soHoGiaDinh;
    KhuPho khuPho;
    cout << "Nhap so ho gia dinh trong khu pho:";
    cin >> soHoGiaDinh;
    cin.ignore(32767, '\n');
    khuPho.nhapThongTinKhuPho(soHoGiaDinh);
    khuPho.xuatThongTinKhuPho();
}