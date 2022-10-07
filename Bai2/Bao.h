#ifndef _BAO_H_
#define _BAO_H_

#include "TaiLieu.h"

struct Date
{
    int day;
    int month;
    int year;
};

class Bao : public TaiLieu
{
private:
    Date m_ngayPhatHanh;
public:
    Bao();
    Bao(Date ngayPhatHanh);
    ~Bao();
    void setNgayPhatHanh(Date ngayPhatHanh);
    Date getNgayPhatHanh();
    int getType();
    void nhapThongTin();
    void xuatThongTin();
};


#endif 