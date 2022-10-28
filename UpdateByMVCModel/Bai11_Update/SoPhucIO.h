#ifndef _SOPHUCIO_H_
#define _SOPHUCIO_H_

#include "SoPhuc.h"

class SoPhucIO
{
    public:
        int inputReal();
        int inputComp();
        SoPhuc inputSoPhuc();
        void printSoPhuc(int, int);
        void printAdd(int, int);
        void printSub(int, int);
        void printMulti(int, int);
};

#endif