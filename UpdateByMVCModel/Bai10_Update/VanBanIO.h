#ifndef _VANBANIO_H_
#define _VANBANIO_H_

#include "VanBan.h"

class VanBanIO
{
    public:
        string inputString();
        void printString(string);
        void printTongSoTu(int);
        void printTongSoKyTu(int);
        void printEmptyString();
};

#endif