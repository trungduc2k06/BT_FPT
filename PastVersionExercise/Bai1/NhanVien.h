#ifndef _NHANVIEN_H_
#define _NHANVIEN_H_

#include "CanBo.h"

class NhanVien : public CanBo
{
    private:
        string m_task;
    public:
        NhanVien();
        NhanVien(string task);
        ~NhanVien();
        void setTask(string task);
        string getTask();
        int getType();
        void nhapThongTin();
        void xuatThongTin();
};


#endif 