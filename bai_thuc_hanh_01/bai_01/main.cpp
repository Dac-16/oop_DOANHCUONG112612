#include <iostream>
#include<string>
using namespace std;
class Xe{
private:
    int maXe;
    string loaiXe;
    int gioVao;
    int thoiGianDo;
    double phiDoXe;
    bool dangChiemCho;
public:
    Xe(){
        maXe = 0;
        loaiXe = "";
        gioVao = 0;
        thoiGianDo = 0;
        phiDoXe = 0.0;
        dangChiemCho = false;
    }
    Xe(int ma, const stirng& loai, int gio, int thoiLuong){
        maXe = ma;
        loaiXe = chuanHoaLoaiXe(loai);
        if (gio >= 0 && gio <= 23) {
            gioVao = gio;
        } else {
            gioVao = 0;
        }
        if (thoiLuong >= 1 && thoiLuong <= 23) {
            thoiGianDo = thoiLuong;
        } else {
            thoiGianDo = 1;
        }
        phiDoXe = 0.0;
        dangChiemCho = true;
        tinhPhiDoXe();
    }
    int layMaXe() const {
        return maXe; 
        }
    string layLoaiXe() const {
        return loaiXe;
        }
    int layGioVao() const {
        return gioVao;
        }
    int layThoiGianDo() const {
        return thoiGianDo;
        }
    double layPhiDoXe() const {
        return phiDoXe;
        }
    bool layDangChiemCho() const {
        return dangChiemCho;
        }
    void ganMaXe(int ma){
        maXe=ma;
    }

    void ganLoaiXe(const string& loai) { 
        loaiXe = chuanHoaLoaiXe(loai); 
        tinhPhiDoXe();
    }
    void ganGioVao(int gio) { 
        gioVao = (gio >= 0 && gio <= 23) ? gio : 0; 
        tinhPhiDoXe();
    }
    void ganThoiLuongDo(int thoiLuong) { 
        thoiGianDo = (thoiLuong >= 1 && thoiLuong <= 23) ? thoiLuong : 1; 
        tinhPhiDoXe();
    }
    void ganPhiDoXe(double phi) {
        phiDoXe = phi;
    }
    void ganDangChiemCho(bool trangThai) {
        dangChiemCho = trangThai; 
    }

    static string chuanHoaLoaiXe(const string& loai);
    static bool laLoaiXeHopLe(const string& loai);
    void tinhPhiDoXe();
    void hienThi() const;
};
class BaiDoXe{
private:
    int maBai;
    char kichThuoc;
    Xe xe1, xe2, xe3;
    bool coXe1, coXe2, coXe3;
public:
    BaiDoXe(){
    maBai = 0;
    kichThuoc = 'S';
    coXe1 = false;
    coXe2 = false;
    coXe3 = false;
}
    BaiDoXe(int ma, char size){
    maBai = ma;
    kichThuoc = size;
    coXe1 = false;
    coXe2 = false;
    coXe3 = false;
}
    int layMaBai() const { 
        return maBai; 
}
    char layKichThuoc() const {
        return kichThuoc; 
}
    int laySucChuaToiDa() const {
        if (kichThuoc == 'S') return 1;
        if (kichThuoc == 'M') return 2;
        return 3;
}
    int laySoLuongXeHienTai() const {
        int so = 0;
        if (coXe1) so++;
        if (coXe2) so++;
        if (coXe3) so++;
        return so;
    }
    bool themXe(const Xe& x) {
        int max = laySucChuaToiDa();
        
        if (!coXe1 && max >= 1) {
            xe1 = x;
            coXe1 = true;
            return true;
        }
        if (!coXe2 && max >= 2) {
            xe2 = x;
            coXe2 = true;
            return true;
        }
        if (!coXe3 && max >= 3) {
            xe3 = x;
            coXe3 = true;
            return true;
        }
        return false;
    }
    bool xoaXe(int maXe) {
        if (coXe1 && xe1.layMaXe() == maXe) { 
            coXe1 = false; 
            return true; 
        }
        if (coXe2 && xe2.layMaXe() == maXe) {
            coXe2 = false; 
            return true; 
        }
        if (coXe3 && xe3.layMaXe() == maXe) {
            coXe3 = false;
            return true; 
        }
        return false;
    }
    void hienThiThongTinBai() const {
        cout << "Bai do ID: " << maBai 
             << " - Kich thuoc: " << kichThuoc 
             << " - So xe hien tai: " << laySoLuongXeHienTai() 
             << "/" << laySucChuaToiDa() << endl;
        if (coXe1) xe1.hienThi();
        if (coXe2) xe2.hienThi();
        if (coXe3) xe3.hienThi();
    }
};
