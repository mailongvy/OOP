#include<iostream>
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<cmath>
#include<time.h>
#include<stdlib.h>
#include<string>
#include<fstream>
#include<vector>
using namespace std;
// ===================== nhan vien sua ong nuoc ======================
class nhanviensuaongnuoc
{
private:
    string hoten;
    int tuoi;
    string gioitinnh;
    string diachi;
    string sdt;
    float chieu_cao;
    float can_nang;
    float so_h_sua;
public:
    void Nhap_Thong_Tin();
    void Xuat_Thong_Tin();
    float Tinh_Tien_Luong();
};

// ham nhap thong tin tho sua ong nuoc
void nhanviensuaongnuoc::Nhap_Thong_Tin() {
    cout << "\nNhap ho ten nhan vien: ";
    getline(cin, hoten);

    cout << "\nNhap tuoi: ";
    cin >> tuoi;

    cin.ignore();
    cout << "\nNhap gioi tinh: ";
    getline(cin, gioitinnh);

    cin.ignore();
    cout << "\nNhap dia chi: ";
    getline(cin, diachi);

    cin.ignore();
    cout << "\nNhap sdt: ";
    getline(cin, sdt);

    cout << "\nNhap chieu cao: ";
    cin >> chieu_cao;

    cout << "\nNhap can nang: ";
    cin >> can_nang;

    cout << "\nSo gio sua: ";
    cin >> so_h_sua;
}

void nhanviensuaongnuoc::Xuat_Thong_Tin() {
    cout << "\nHo ten nhan vien: " << hoten;
    cout << "\nTuoi nhan vien: " << tuoi;
    cout << "\nGioi tinh: " << gioitinnh;
    cout << "\nDia chi: " << diachi;
    cout << "\nSDT: " << sdt;
    cout << "\nChieu cao: " << chieu_cao;
    cout << "\nCan nang" << can_nang;
    cout << "\nSo gio sua: " << so_h_sua;
}

//  ham tinh tien luuong cho nhan vien sua ong nuoc
float nhanviensuaongnuoc::Tinh_Tien_Luong() {
    return so_h_sua * 50000;
}

// ======================== nhan vien giao hang ========================
class nhanviengiaohang
{
private:
    string hoten;
    int tuoi;
    string gioitinnh;
    string diachi;
    string sdt;
    float chieu_cao;
    float can_nang;
    int so_hang_giao;
public:
    void Nhap_Thong_Tin();
    void Xuat_Thong_Tin();
    float Tinh_Tien_Luong();
};

// ham nhap thong tin nhan vien giao hang
void nhanviengiaohang::Nhap_Thong_Tin() {
    cin.ignore();
    cout << "\nNhap ho ten nhan vien: ";
    getline(cin, hoten);

    cout << "\nNhap tuoi: ";
    cin >> tuoi;

    cin.ignore();
    cout << "\nNhap gioi tinh: ";
    getline(cin, gioitinnh);

    cout << "\nNhap dia chi: ";
    getline(cin, diachi);

    cout << "\nNhap sdt: ";
    getline(cin, sdt);

    cout << "\nNhap chieu cao: ";
    cin >> chieu_cao;

    cout << "\nNhap can nang: ";
    cin >> can_nang;

    cout << "\nSo hang giao duoc: ";
    cin >> so_hang_giao;


}

// ham xuat thong tin cho nhan vien giao hang
void nhanviengiaohang::Xuat_Thong_Tin() {
    cout << "\nHo ten nhan vien: " << hoten;
    cout << "\nTuoi nhan vien: " << tuoi;
    cout << "\nGioi tinh: " << gioitinnh;
    cout << "\nDia chi: " << diachi;
    cout << "\nSDT: " << sdt;
    cout << "\nChieu cao: " << chieu_cao;
    cout << "\nCan nang" << can_nang;
    cout << "\nSo hang giao: " << so_hang_giao;
}

// ham tinh tien luong cho nhan vien giao hang
float nhanviengiaohang::Tinh_Tien_Luong() {
    return so_hang_giao * 33500;
}

// ======================== nhan vien xe om ===========================
class nhanvienxeom
{
private:
    string hoten;
    int tuoi;
    string gioitinnh;
    string diachi;
    string sdt;
    float chieu_cao;
    float can_nang;
    float so_km;
public:
    void Nhap_Thong_Tin();
    void Xuat_Thong_Tin();
    float Tinh_Tien_Luong();
};

// ham nhap thong tin nhan vien chay xem om
void nhanvienxeom::Nhap_Thong_Tin() {
    cin.ignore(); 
    cout << "\nNhap ho ten nhan vien: ";
    getline(cin, hoten);

    cout << "\nNhap tuoi: ";
    cin >> tuoi;

    cin.ignore();
    cout << "\nNhap gioi tinh: ";
    getline(cin, gioitinnh);

    cin.ignore();
    cout << "\nNhap dia chi: ";
    getline(cin, diachi);

    cin.ignore();
    cout << "\nNhap sdt: ";
    getline(cin, sdt);

    cout << "\nNhap chieu cao: ";
    cin >> chieu_cao;

    cout << "\nNhap can nang: ";
    cin >> can_nang;

    cout << "\nSo km chay duoc: ";
    cin >> so_km;
}

// ham xuat thong tin cho nhan vien chay xe om
void nhanvienxeom::Xuat_Thong_Tin() {
    cout << "\nHo ten nhan vien: " << hoten;
    cout << "\nTuoi nhan vien: " << tuoi;
    cout << "\nGioi tinh: " << gioitinnh;
    cout << "\nDia chi: " << diachi;
    cout << "\nSDT: " << sdt;
    cout << "\nChieu cao: " << chieu_cao;
    cout << "\nCan nang: " << can_nang;
    cout << "\nSo km chay dc: " << so_km;
}

float nhanvienxeom::Tinh_Tien_Luong() {
    return so_km * 10000;
}

int main() {
    nhanviensuaongnuoc nv_suaongnuoc[100];
    nhanviengiaohang nv_giaohang[100];
    nhanvienxeom nv_xeom[100];

    // cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN SUA ONG NUOC\n";
    // nv_suaongnuoc.Nhap_Thong_Tin();
    // cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN GIAO HANG\n";
    // nv_giaohang.Nhap_Thong_Tin();
    // cout << "\n\n\t\tNHAP THONG TIN NHAN VIWN XE OM CONG NGHE";
    // nv_xeom.Nhap_Thong_Tin();

    // cout << "\n\n\t\tTHONG TIN NHAN VIEN SUA ONG NUOC\n";
    // nv_suaongnuoc.Xuat_Thong_Tin();
    // cout << "\nLuong: " << nv_suaongnuoc.Tinh_Tien_Luong();
    // cout << "\n\n\t\tTHONG TIN NHAN VIEN GIAO HANG\n";
    // nv_giaohang.Xuat_Thong_Tin();
    // cout << "\nLuong: " << nv_giaohang.Tinh_Tien_Luong();
    // cout << "\n\n\t\tTHONG TIN NHAN VIWN XE OM CONG NGHE";
    // nv_xeom.Xuat_Thong_Tin();
    // cout << "\nLuong: " << nv_xeom.Tinh_Tien_Luong();
    system("pause");
    return 0;
}