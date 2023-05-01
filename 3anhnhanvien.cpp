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

    cout << "\nSo gio sua: ";
    cin >> so_h_sua;
}

//  ham tinh tien luuong cho nhan vien sua ong nuoc
float nhanviensuaongnuoc::Tinh_Tien_Luong() {
    return so_h_sua * 50000;
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
    cout << "\nLuong: " << Tinh_Tien_Luong();
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

// ham tinh tien luong cho nhan vien giao hang
float nhanviengiaohang::Tinh_Tien_Luong() {
    return so_hang_giao * 33500;
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
    cout << "\nLuong: " << Tinh_Tien_Luong();
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

    cout << "\nNhap dia chi: ";
    getline(cin, diachi);

    cout << "\nNhap sdt: ";
    getline(cin, sdt);

    cout << "\nNhap chieu cao: ";
    cin >> chieu_cao;

    cout << "\nNhap can nang: ";
    cin >> can_nang;

    cout << "\nSo km chay duoc: ";
    cin >> so_km;
}

// ham tinh tien luong cho nhan vien xe om
float nhanvienxeom::Tinh_Tien_Luong() {
    return so_km * 10000;
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
    cout << "\nLuong: " << Tinh_Tien_Luong();
}

//  ham tinh tong tien luong 
float Tinh_Tien_Luong_Nhan_Vien_Sua_Ong_Nuoc(nhanviensuaongnuoc ds[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ds[i].Tinh_Tien_Luong();
    }
    return sum;
}

//  ham tinh tong tien luong nhan vien giao hang
float Tinh_Tien_Luong_Nhan_Vien_Giao_Hang(nhanviengiaohang ds[], int m) {
    double sum = 0;
    for (int i = 0; i < m; i++) {
        sum += ds[i].Tinh_Tien_Luong();
    }
    return sum;
}

// ham tinh tong cac nhan vien xe om
float Tinh_Tien_Luong_Nhan_Vien_Xe_Om(nhanvienxeom ds[], int l) {
    double sum = 0;
    for (int i = 0; i < l; i++) {
        sum += ds[i].Tinh_Tien_Luong();
    }
    return sum;
}

// ham sap xep danh sach sua ong nuoc giam dan theo luong
void Sap_Xep_Danh_Sach_Nhan_Vien_Sua_Ong_Nuoc_Giam_Dan_Theo_Luong(nhanviensuaongnuoc ds_suaongnuuoc[], int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ds_suaongnuuoc[i].Tinh_Tien_Luong() <= ds_suaongnuuoc[j].Tinh_Tien_Luong())
            {
                nhanviensuaongnuoc temp = ds_suaongnuuoc[i];
                ds_suaongnuuoc[i] = ds_suaongnuuoc[j];
                ds_suaongnuuoc[j] = temp;
            }
            
        }
        
    }
    
}

// ham sap xep danh sach NHAN VIEN GIAO HANG giam dan theo luong
void Sap_Xep_Danh_Sach_Nhan_Vien_GIAO_HANG_Giam_Dan_Theo_Luong(nhanviengiaohang ds_giaohang[], int m) {
    for (int i = 0; i < m; i++)
    {
        for (int j = i + 1; j < m; j++)
        {
            if (ds_giaohang[i].Tinh_Tien_Luong() <= ds_giaohang[j].Tinh_Tien_Luong())
            {
                nhanviengiaohang temp = ds_giaohang[i];
                ds_giaohang[i] = ds_giaohang[j];
                ds_giaohang[j] = temp;
            }
            
        }
        
    }
    
}

// ham sap xep danh sach XE OM giam dan theo luong
void Sap_Xep_Danh_Sach_Nhan_Vien_XE_OM_Giam_Dan_Theo_Luong(nhanvienxeom ds_xeom[], int l) {
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (ds_xeom[i].Tinh_Tien_Luong() <= ds_xeom[j].Tinh_Tien_Luong())
            {
                nhanvienxeom temp = ds_xeom[i];
                ds_xeom[i] = ds_xeom[j];
                ds_xeom[j] = temp;
            }
            
        }
        
    }
    
}

// thiet ke menu
// ham menu
void menu(nhanviensuaongnuoc ds_suaongnuoc[], nhanviengiaohang ds_giaohang[], nhanvienxeom ds_xeom[], int &n, int &m, int &l) {
    int luachon;
    while (true)
    {
        system("cls");
        cout << "\n\n\t\t========== CHUONG TRINH QUAN LI =============";
        cout << "\n1. NHAP THONG TIN NHAN VIEN SUA ONG NUOC";
        cout << "\n2. NHAP THONG TIN NHAN VIEN GIAO HANG";
        cout << "\n3. NHAP THONG TIN NHAN VIEN XE OM";
        cout << "\n4. XUAT DANH SACH THONG TIN NHAN VIEN SUA ONG NUOC";
        cout << "\n5. XUAT DANH SACH THONG TIN NHAN VIEN GIAO HANG";
        cout << "\n6. XUAT DANH SACH THONG TIN NHAN VIEN XE OM";
        cout << "\n7. TONG TIEN MA CONG TY PHAI CHI TRA CHO NHAN VIEN";
        cout << "\n8. SAP XEP DANH SACH CAC LOAI NHAN VIEN GIAM DAN THEO LUONG";
        cout << "\n0. EXIT";
        cout << "\n\n\t\t================ END ========================";

        // nhap lua chon 
        cout << "\nNhap lua chon: ";
        cin >> luachon;

        if (luachon < 0 || luachon > 8)
        {
            cout << "\n\tLUA CHON KHONG HOP LE";
        }
        
        if (luachon == 0)
        {
            break;
        }
        
        if (luachon == 1)
        {
            nhanviensuaongnuoc nv_suaongnuoc;
            cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN SUA ONG NUOC\n";
            nv_suaongnuoc.Nhap_Thong_Tin();

            // them doi tuong nhan vien sua ong nuoc vao danh sach nhan vien sua ong nuoc
            ds_suaongnuoc[n] = nv_suaongnuoc;
            n++;
        }
        
        if (luachon == 2)
        {
            nhanviengiaohang nv_giaohang;
            cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN GIAO HANG\n";
            nv_giaohang.Nhap_Thong_Tin();

            // them doi tuong nhan vien giao hang vao danh sach nhan vien giao hang
            ds_giaohang[m] = nv_giaohang;
            m++;
        }

        if (luachon == 3)
        {
            nhanvienxeom nv_xeom;
            cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN XE OM\n";
            nv_xeom.Nhap_Thong_Tin();

            // them doi tuong nhan vien xe om vao danh sach nhan vien om
            ds_xeom[l] = nv_xeom;
            l++;
        }

        if (luachon == 4)
        {
            cout << "\n\n\t\tDANH SACH THONG TIN NHAN VIEN SUA ONG NUOC\n";
            for (int i = 0; i < n; i++)
            {
                cout << "\n\n\tTHONG TIN NHAN VIEN SUA ONG NUOC THU" << i + 1 << ": ";
                ds_suaongnuoc[i].Xuat_Thong_Tin();
            }
            cout << "\n\n\t\tTONG TIEN LUONG CUA TAT CA CAC NHAN VIEN:" << (size_t)(Tinh_Tien_Luong_Nhan_Vien_Sua_Ong_Nuoc(ds_suaongnuoc, n));
            system("pause");
        }
        
        if (luachon == 5)
        {
            cout << "\n\n\t\tDANH SACH THONG TIN NHAN VIEN GIAO HANG\n";
            for (int i = 0; i < m; i++)
            {
                cout << "\n\n\tTHONG TIN NHAN VIEN GIAO HANG THU" << i + 1 << ": ";
                ds_giaohang[i].Xuat_Thong_Tin();
            }
            cout << "\n\n\t\tTONG TIEN LUONG CUA TAT CA CAC NHAN VIEN:" << (size_t)(Tinh_Tien_Luong_Nhan_Vien_Giao_Hang(ds_giaohang, m));
            system("pause");
        }

        if (luachon == 6)
        {
            cout << "\n\n\t\tDANH SACH THONG TIN NHAN VIEN XE OM\n";
            for (int i = 0; i < l; i++)
            {
                cout << "\n\n\tTHONG TIN NHAN VIEN XE OM THU" << i + 1 << ": ";
                ds_xeom[i].Xuat_Thong_Tin();
            }
            cout << "\n\n\t\tTONG TIEN LUONG CUA TAT CA CAC NHAN VIEN:" << (size_t)(Tinh_Tien_Luong_Nhan_Vien_Xe_Om(ds_xeom, l));
            system("pause");
        }

        if (luachon == 7)
        {
            cout << "\n\t TONG TIEN MA CONG TY CAN CHI TRA CHO TAT CA NAHN VIEN: ";
            cout << (size_t)(Tinh_Tien_Luong_Nhan_Vien_Sua_Ong_Nuoc(ds_suaongnuoc, n) + Tinh_Tien_Luong_Nhan_Vien_Giao_Hang(ds_giaohang, m) + Tinh_Tien_Luong_Nhan_Vien_Xe_Om(ds_xeom, l));
            system("pause");
        }

        if (luachon == 8)
        {
            cout << "\n\n\t\t DANH SACH GIAM DAN LUONG NHAN VIEN SUA ONG NUOC THANH CONG\n";
            Sap_Xep_Danh_Sach_Nhan_Vien_Sua_Ong_Nuoc_Giam_Dan_Theo_Luong(ds_suaongnuoc, n);
            cout << "\n\n\t\t DANH SACH GIAM DAN LUONG NHAN VIEN GIAO HANG THANH CONG\n";
            Sap_Xep_Danh_Sach_Nhan_Vien_GIAO_HANG_Giam_Dan_Theo_Luong(ds_giaohang, m);
            cout << "\n\n\t\t DANH SACH GIAM DAN LUONG NHAN VIEN SUA XE OM THANH CONG\n";
            Sap_Xep_Danh_Sach_Nhan_Vien_XE_OM_Giam_Dan_Theo_Luong(ds_xeom, l);
            system("pause");
        }
        
        


    }
    
}



int main() {
    nhanviensuaongnuoc ds_suaongnuoc[100]; // mang moy chiu nhan vien sua ong nuoc
    nhanviengiaohang ds_giaohang[100]; // mang mot chieu nhan vien giao hang
    nhanvienxeom ds_xeom[100]; // mang mot chiu nhan vien xe óm
    int n = 0; // so luong nhan vien sua ong nuoc
    int m = 0; // so luong nhan vien giao hang
    int l = 0; // so luong nhan vien xe om
    menu(ds_suaongnuoc, ds_giaohang, ds_xeom, n, m, l);
    
    system("pause");
    return 0;
}