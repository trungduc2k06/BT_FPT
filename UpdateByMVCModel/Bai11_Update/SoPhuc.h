#ifndef _SOPHUC_H_
#define _SOPHUC_H_

#include <iostream>
#include <string>

using namespace std;

class SoPhuc
{
private:
    int m_real;
    int m_comp;
public:
    SoPhuc();
    SoPhuc(int, int);
    SoPhuc(SoPhuc&);
    ~SoPhuc();
    void setReal(int);
    int getReal();
    void setComp(int);
    int getComp();
};

#endif