#include <iostream>
#include <string>
using namespace std;

class SinhVien {
private:
    string hoTen;
    int namSinh;
    float diem[4];

public:
    void nhap() {
        cin.ignore();
        cout << "Ho ten: ";
        getline(cin, hoTen);
        cout << "Nam sinh: ";
        cin >> namSinh;

        for (int i = 0; i < 4; i++) {
            cout << "Diem mon " << i + 1 << ": ";
            cin >> diem[i];
        }
    }

    void xuat() {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Nam sinh: " << namSinh << endl;
        for (int i = 0; i < 4; i++)
            cout << "Diem mon " << i + 1 << ": " << diem[i] << endl;
        cout << "Diem trung binh: " << tinhDTB() << endl;
    }

    float tinhDTB() {
        float tong = 0;
        for (int i = 0; i < 4; i++)
            tong += diem[i];
        return tong / 4;
    }

    bool thiTotNghiep() {
        if (tinhDTB() < 7)
            return false;

        for (int i = 0; i < 4; i++) {
            if (diem[i] < 5)
                return false;
        }

        return true;
    }
};

int main() {
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;

    SinhVien ds[100];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap sinh vien thu " << i + 1 << endl;
        ds[i].nhap();
    }

    cout << "\nDanh sach sinh vien du dieu kien thi tot nghiep:\n";

    for (int i = 0; i < n; i++) {
        if (ds[i].thiTotNghiep()) {
            ds[i].xuat();
            cout << endl;
        }
    }

    return 0;
}