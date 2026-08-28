#include <iostream>
using namespace std;

class maTran
{
private:
    int soHang;
    int soCot;
    int a[100][100];

public:
    void nhap()
    {
        cout << "Nhap so hang: ";
        cin >> soHang;

        cout << "Nhap so cot: ";
        cin >> soCot;

        cout << "Nhap cac phan tu cua ma tran:\n";

        for (int i = 0; i < soHang; i++)
        {
            for (int j = 0; j < soCot; j++)
            {
                cout << "a[" << i << "][" << j << "] = ";
                cin >> a[i][j];
            }
        }
    }
    
    void xuat()
    {
        for (int i = 0; i < soHang; i++)
        {
            for (int j = 0; j < soCot; j++)
            {
                cout << a[i][j] << "\t";
            }
            cout << endl;
        }
    }

    friend maTran cong(maTran A, maTran B);
};

maTran cong(maTran A, maTran B)
{
    maTran C;

    C.soHang = A.soHang;
    C.soCot = A.soCot;

    for (int i = 0; i < A.soHang; i++)
    {
        for (int j = 0; j < A.soCot; j++)
        {
            C.a[i][j] = A.a[i][j] + B.a[i][j];
        }
    }

    return C;
}

int main()
{
    maTran A, B, C;

    cout << "===== NHAP MA TRAN A =====" << endl;
    A.nhap();

    cout << "\n===== NHAP MA TRAN B =====" << endl;
    B.nhap();

    C = cong(A, B);

    cout << "\n===== MA TRAN A =====" << endl;
    A.xuat();

    cout << "\n===== MA TRAN B =====" << endl;
    B.xuat();

    cout << "\n===== MA TRAN A + B =====" << endl;
    C.xuat();

    return 0;
}