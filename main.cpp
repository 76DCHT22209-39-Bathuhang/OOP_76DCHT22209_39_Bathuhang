#include <iostream>
#include <vector>
using namespace std;

class NhanVien
{
private:
    string maNV;
    string hoTen;
    int tuoi;
    double luong;

public:
    void nhap()
    {
        cout << "Nhap ma nhan vien: ";
        cin >> maNV;

        cin.ignore();
        cout << "Nhap ho ten: ";
        getline(cin, hoTen);

        cout << "Nhap tuoi: ";
        cin >> tuoi;

        cout << "Nhap luong: ";
        cin >> luong;
    }

    void xuat()
    {
        cout << "Ma nhan vien: " << maNV << endl;
        cout << "Ho ten: " << hoTen << endl;
        cout << "Tuoi: " << tuoi << endl;
        cout << "Luong: " << luong << endl;
    }
};

int main()
{
    cout << "\n========================================";
    cout << "\n       CACH 1: DUNG MANG TINH";
    cout << "\n========================================\n";

    NhanVien dsnv[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "\n=== NHAP THONG TIN CHO NHAN VIEN "
             << i + 1 << " ===" << endl;

        dsnv[i].nhap();
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "\n=== XUAT THONG TIN NHAN VIEN "
             << i + 1 << " ===" << endl;

        dsnv[i].xuat();
    }

    cout << "\n========================================";
    cout << "\n       CACH 2: DUNG MANG DONG";
    cout << "\n========================================\n";

    NhanVien *dsnv2;

    dsnv2 = new NhanVien[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "\n=== NHAP THONG TIN CHO NHAN VIEN "
             << i + 1 << " ===" << endl;

        dsnv2[i].nhap();
    }

    for (int i = 0; i < 10; i++)
    {
        cout << "\n=== XUAT THONG TIN NHAN VIEN "
             << i + 1 << " ===" << endl;

        dsnv2[i].xuat();
    }

    delete[] dsnv2;

    cout << "\n========================================";
    cout << "\n       CACH 3: DUNG VECTOR";
    cout << "\n========================================\n";

    vector<NhanVien> ds;

    for (int i = 0; i < 10; i++)
    {
        NhanVien nv;

        cout << "\n=== NHAP THONG TIN CHO NHAN VIEN "
             << i + 1 << " ===" << endl;

        nv.nhap();

        ds.push_back(nv);
    }

    for (int i = 0; i < ds.size(); i++)
    {
        cout << "\n=== XUAT THONG TIN NHAN VIEN "
             << i + 1 << " ===" << endl;

        ds[i].xuat();
    }

    cout << "\n\n========================================";
    cout << "\n          SO SANH 3 CACH";
    cout << "\n========================================\n";

    cout << "\n1. MANG TINH:";
    cout << "\n- Cu phap don gian.";
    cout << "\n- Kich thuoc co dinh.";
    cout << "\n- Khong thay doi duoc so luong phan tu.";
    cout << "\n- Bo nho duoc cap phat tu dong.";

    cout << "\n\n2. MANG DONG:";
    cout << "\n- Dung con tro va toan tu new.";
    cout << "\n- Kich thuoc duoc cap phat khi chay chuong trinh.";
    cout << "\n- Chu dong quan ly bo nho.";
    cout << "\n- Phai dung delete[] de giai phong bo nho.";

    cout << "\n\n3. VECTOR:";
    cout << "\n- De su dung.";
    cout << "\n- Kich thuoc co the tu dong thay doi.";
    cout << "\n- Co the them phan tu bang push_back().";
    cout << "\n- Khong phai tu quan ly bo nho bang delete.";

    cout << "\n\n=> KET LUAN:";
    cout << "\n- Mang tinh phu hop khi biet truoc so luong phan tu.";
    cout << "\n- Mang dong phu hop khi muon tu quan ly bo nho.";
    cout << "\n- Vector linh hoat va tien dung khi so luong phan tu thay doi.";

    return 0;
}