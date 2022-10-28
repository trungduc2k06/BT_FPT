#include "SoPhuc.h"

SoPhuc::SoPhuc()
{
    m_real = 0;
    m_comp = 0;
}
SoPhuc::SoPhuc(int real, int comp)
{
    m_real = real;
    m_comp = comp;
}
SoPhuc::SoPhuc(SoPhuc& sophuc)
{
    m_real = sophuc.m_real;
    m_comp = sophuc.m_comp;
}
SoPhuc::~SoPhuc()
{

}
void SoPhuc::setReal(int real)
{
    m_real = real;
}
int SoPhuc::getReal()
{
    return m_real;
}
void SoPhuc::setComp(int comp)
{
    m_comp = comp;
}
int SoPhuc::getComp()
{
    return m_comp;
}