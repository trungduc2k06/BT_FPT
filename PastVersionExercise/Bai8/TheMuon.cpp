#include "TheMuon.h"

TheMuon::TheMuon()
{
    m_maPhieuMuon = 0;
    m_ngayMuon = 0;
    m_ngayTra = 0;
    m_soHieuSach = 0;
}
TheMuon::TheMuon(int maPhieuMuon, int ngayMuon, int ngayTra, int soHieuSach)
{
    m_maPhieuMuon = maPhieuMuon;
    m_ngayMuon = ngayMuon;
    m_ngayTra = ngayTra;
    m_soHieuSach = soHieuSach;
}
TheMuon::~TheMuon()
{

}
void TheMuon::setMaPhieuMuon(int maPhieuMuon)
{
    m_maPhieuMuon = maPhieuMuon;
}
int TheMuon::getMaPhieuMuon()
{
    return m_maPhieuMuon;
}
void TheMuon::setNgayMuon(int ngayMuon)
{
    m_ngayMuon = ngayMuon;
}
int TheMuon::getNgayMuon()
{
    return m_ngayMuon;
}
void TheMuon::setNgayTra(int ngayTra)
{
    m_ngayTra = ngayTra;
}
int TheMuon::getNgayTra()
{
    return m_ngayTra;
}
void TheMuon::setSoHieuSach(int soHieuSach)
{
    m_soHieuSach = soHieuSach;
}
int TheMuon::getSoHieuSach()
{
    return m_soHieuSach;
}
