#ifndef _VANBAN_H_
#define _VANBAN_H_

#include <iostream>
#include <string>

using namespace std;

class VanBan
{
private:
    string m_chuoiKyTu;
public:
    VanBan();
    VanBan(string);
    VanBan(VanBan&);
    ~VanBan();
    void setString(string);
    string getString();
};

#endif