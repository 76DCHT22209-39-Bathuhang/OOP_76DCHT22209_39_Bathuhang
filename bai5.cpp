#include <iostream>
#include <string>
using namespace std;

class Nguoi {
protected:
    string hoTen;
    int namSinh;

public:
    void nhap() {
        cout << "Nhap ho ten: ";
        getline(cin >> ws, hoTen);

        cout << "Nhap nam sinh: ";
        cin >> namSinh;
    }

    void xuat() {
        cout << "Ho ten: " << hoTen << endl;
        cout << "Nam sinh: " << namSinh << endl;
    }
};

class SinhVien : public Nguoi {
private:
    string maSV;
    float diemTB;

public:
    void nhap() {
        Nguoi::nhap();

        cout << "Nhap ma sinh vien: ";
        getline(cin >> ws, maSV);

        cout << "Nhap diem trung binh: ";
        cin >> diemTB;
    }

    void xuat() {
        Nguoi::xuat();
        cout << "Ma sinh vien: " << maSV << endl;
        cout << "Diem trung binh: " << diemTB << endl;
    }

    bool timKiem(string tuKhoa) {
        return maSV == tuKhoa || hoTen == tuKhoa;
    }
};

int main() {
    int n;

    cout << "Nhap so sinh vien: ";
    cin >> n;

    SinhVien ds[100];

    for (int i = 0; i < n; i++) {
        cout << "\n=== NHAP SINH VIEN " << i + 1 << " ===" << endl;
        ds[i].nhap();
    }

    string tuKhoa;

    cout << "\nNhap ma sinh vien hoac ho ten can tim: ";
    getline(cin >> ws, tuKhoa);

    bool timThay = false;

    for (int i = 0; i < n; i++) {
        if (ds[i].timKiem(tuKhoa)) {
            cout << "\n=== THONG TIN SINH VIEN TIM THAY ===" << endl;
            ds[i].xuat();
            timThay = true;
        }
    }

    if (!timThay) {
        cout << "\nKhong tim thay sinh vien." << endl;
    }

    return 0;
}