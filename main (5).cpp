#include  <iostream>
using namespace std;

struct nhanvien{
    string mannv;
    string  tennv;
    float luongcb;
    float  heso;
};

int n;
nhanvien ds[100];

void nhap(){
    cout << "Nhap so luong nhan vien: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << "\nNhap nhan vien thu " << i + 1 << ":" << endl;
        cout << "Ma nhan vien: ";  
        cin >> ds[i].mannv;
        cout << "Ten nhan vien: ";
        cin >> ds[i].tennv;
        cout << "Luong co ban: ";
        cin >> ds[i].luongcb;
        cout << "He so: ";
        cin >> ds[i].heso;
    }
}
void xuat(){
    cout << "\n===== DANH SACH NHAN VIEN =====" << endl;
    for (int i = 0 ; i < n; i++){
        cout << "\nNhan vien thu " << i + 1 << ":" << endl;
        cout << "Ma nhan vien: " << ds[i].mannv << endl;
        cout << "Luong co ban: " << ds[i].tennv << endl;
        cout << "He so: " << ds[i].heso << endl;
    }
}
int main(){
    nhap();
    xuat();
    return 0;
}