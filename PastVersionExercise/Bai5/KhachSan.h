#ifndef _KHACHSAN_H_
#define _KHACHSAN_H_

#include "Nguoi.h"

#define priceA 500
#define priceB 300
#define priceC 100

class KhachSan : public Nguoi
{
private:
    int m_roomType;
    int m_soNgayThue;
public:
    KhachSan();
    KhachSan(int roomType, int soNgayThue);
    ~KhachSan();
    void setRoomType(int roomType);
    int getRoomType();
    void setSoNgayThue(int soNgayThue);
    int getSoNgayThue();
    void nhapThongTinCaNhan();
    void xuatThongTinCaNhan();
};


#endif


