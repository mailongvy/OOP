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
class sinhvien
{
private:
    string hoten;
    string maso;
    double diem_toan;
    double diem_ly;
public:
    void Nhap_Thong_Tin();
    void Xuat_Thong_Tin();
};

// ham nhap thong tin
void sinhvien::Nhap_Thong_Tin() {
    cout << "\nMoi ban nhap ho ten sinh vien: ";
    getline(cin, hoten);
    cin.ignore();
    cout << "\nNhap ma so sinh vien: ";
    getline(cin, maso);
    cout << "\nNhap diem toan: ";
    cin >> diem_toan;
    cout << "\nNhap diem ly";
    cin >> diem_ly;
}

// ham xuat thong tin
void sinhvien::Xuat_Thong_Tin() {
    cout << "\nTen sinh vien: " << hoten;
    cout << "\nMa so sinh vien: " << maso;
    cout << "\nDiem toan: " << diem_toan;
    cout << "\nDiem ly: " << diem_ly;
}





int main() {
    sinhvien sv;
    sv.Nhap_Thong_Tin();
    sv.Xuat_Thong_Tin();
    return 0;
}


