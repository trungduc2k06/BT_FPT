#ifndef _CANBO_H_
#define _CANBO_H_

#include <iostream>
#include <string>

using namespace std;

enum typeCanBo
{
    congNhan=1,
    kySu,
    nhanVien,
};

class CanBo
{
    private:
        string m_name;
        int m_age;
        string m_gender;
        string m_address;
    public:
        CanBo();
        CanBo(string name,int age, string gender, string address);
        ~CanBo();
        void setName(string name);
        string getName();
        void setAge(int age);
        int getAge();
        void setGender(string gender);
        string getGender();
        void setAddress(string address);
        string getAddress();
        virtual int getType() = 0;
        virtual void nhapThongTin();
        virtual void xuatThongTin();
};

#endif 