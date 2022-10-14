#ifndef _THEMUON_H_
#define _THEMUON_H_

#include "SinhVien.h"

class TheMuon : public SinhVien
{
    private:
        int m_maPhieuMuon;
        int m_ngayMuon;
        int m_ngayTra;
        int m_soHieuSach;
    public:
        TheMuon();
        TheMuon(int maPhieuMuon, int ngayMuon, int ngayTra, int soHieuSach);
        ~TheMuon();
        void setMaPhieuMuon(int maPhieuMuon);
        int getMaPhieuMuon();
        void setNgayMuon(int ngayMuon);
        int getNgayMuon();
        void setNgayTra(int ngayTra);
        int getNgayTra();
        void setSoHieuSach(int soHieuSach);
        int getSoHieuSach();
        void nhapThongTinSinhVien();
        void xuatThongTinSinhVien();
};

#endif