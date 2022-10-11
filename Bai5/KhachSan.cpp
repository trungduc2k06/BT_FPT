#include "KhachSan.h"

KhachSan::KhachSan()
{
    m_roomType = 0;
    m_soNgayThue = 0;
}
KhachSan::KhachSan(int roomType, int soNgayThue)
{
    m_roomType = roomType;
    m_soNgayThue = soNgayThue;
}
KhachSan::~KhachSan()
{
}
void KhachSan::setRoomType(int roomType)
{
    m_roomType = roomType;
}
int KhachSan::getRoomType()
{
    return m_roomType;
}
void KhachSan::setSoNgayThue(int soNgayThue)
{
    m_soNgayThue = soNgayThue;
}
int KhachSan::getSoNgayThue()
{
    return m_soNgayThue;
}
