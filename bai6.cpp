#include <iostream>
#include <string>
using namespace std;

class SinhVien {
private:
    string hoTen;
    int namSinh;
    float diem[5];

public:
    void nhap() {
        cin.ignore();
        cout << "Ho ten: ";
        getline(cin, hoTen);
        cout << "Nam sinh: ";
        cin >> namSinh;

        for (int i = 0; i < 5; i++) {
            cout << "Diem mon " << i + 1 << ": ";
            cin >> diem[i];
        }
    }

    void xuat() {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Nam sinh: " << namSinh << endl;
        for (int i = 0; i < 5; i++)
            cout << "Diem mon " << i + 1 << ": " << diem[i] << endl;
    }

    float tinhDTB() {
        float tong = 0;
        for (int i = 0; i < 5; i++)
            tong += diem[i];
        return tong / 5;
    }

    void thiLai() {
        bool co = false;
        cout << "Cac mon phai thi lai:" << endl;
        for (int i = 0; i < 5; i++) {
            if (diem[i] < 5) {
                cout << "Mon " << i + 1 << ": " << diem[i] << endl;
                co = true;
            }
        }
        if (!co)
            cout << "Khong co mon thi lai" << endl;
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

    for (int i = 0; i < n; i++) {
        cout << "\nSinh vien thu " << i + 1 << endl;
        ds[i].xuat();
        cout << "Diem trung binh: " << ds[i].tinhDTB() << endl;
        ds[i].thiLai();
    }

    return 0;
}