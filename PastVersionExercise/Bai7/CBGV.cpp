#include "CBGV.h"

CBGV::CBGV()
{
    m_luongCung = 0;
    m_luongThuong = 0;
    m_tienPhat = 0;
    m_tongLuong = 0;
}
CBGV::CBGV(int luongCung, int luongThuong, int tienPhat, int tongLuong)
{
    m_luongCung = luongCung;
    m_luongThuong = luongThuong;
    m_tienPhat = tienPhat;
    m_tongLuong = tongLuong;
}
CBGV::~CBGV()
{

}
void CBGV::setLuongCung(int luongCung)
{
    m_luongCung = luongCung;
}
int CBGV::getLuongCung()
{
    return m_luongCung;
}
void CBGV::setLuongThuong(int luongThuong)
{
    m_luongThuong = luongThuong;
}
int CBGV::getLuongThuong()
{
    return m_luongThuong;
}
void CBGV::setTienPhat(int tienPhat)
{
    m_tienPhat = tienPhat;
}
int CBGV::getTienPhat()
{
    return m_tienPhat;
}
int CBGV::getTongLuong()
{
    m_tongLuong = m_luongCung + m_luongThuong - m_tienPhat;
    return m_tongLuong;
}
