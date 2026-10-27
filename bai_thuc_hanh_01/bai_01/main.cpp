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
    Xe();
    Xe(int ma, const stirng& loai, int gio, int thoiLuong);
    int layMaXe() const;
    string layLoaiXe() const;
    int layGioVao() const;
    int layThoiGianDo() const;
    double layPhiDoXe() const;
    bool layDangChiemCho() const;
    void ganMaXe(int ma);
    void ganLoaiXe(const string& loai);
    void ganGioVao(int gio);
    void ganThoiLuongDo(int thoiLuong);
    void ganPhiDoXe(double phi);
    void ganDangChiemCho(bool trangThai);
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
    BaiDoXe();
    BaiDoXe(int ma, char size);
    int layMaBai() const;
    char layKichThuoc() const;
    bool layCoXe1() const;
    bool layCoXe2() const;
    bool layCoXe3() const;
    Xe layXe1() const;
    Xe layXe2() const;
    Xe layXe3() const;
    void ganMaBai(int ma);
    void ganKichThuoc(char kichThuocBai);
    void ganCoXe1(bool trangThai);
    void ganCoXe2(bool trangThai);
    void ganCoXe3(bool trangThai);
    bool themXe(const Xe& xe);
    bool xoaXe(int maXe);
    void hienThiThongTinBai() const;
};
BaiDoXe::BaiDoXe(){
    maBai = 0;
    kichThuoc = 'S';
    coXe1 = false;
    coXe2 = false;
    coXe3 = false;
}
BaiDoXe::BaiDoXe(int ma, char size){
    maBai = ma;
    kichThuoc = size;
    coXe1 = false;
    coXe2 = false;
    coXe3 = false;
}
