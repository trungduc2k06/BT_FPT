#include "VanBan.h"

VanBan::VanBan()
{
    m_chuoiKyTu = " ";
}
VanBan::VanBan(string chuoiKyTu)
{
    m_chuoiKyTu = chuoiKyTu;
}
VanBan::VanBan(VanBan& vanban)
{
    m_chuoiKyTu = vanban.m_chuoiKyTu;
}
VanBan::~VanBan()
{

}
void VanBan::setString(string chuoiKyTu)
{
    m_chuoiKyTu = chuoiKyTu;
}
string VanBan::getString()
{
    return m_chuoiKyTu;
}