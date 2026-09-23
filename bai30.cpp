#include <iostream>
using namespace std;

class PS1{
    protected:
    float pt;
    float ao;
public:
SP1(){
    pt = 0;
    ao = 0;
}
void nhap(){
    cout << "Nhap phan thuc: ";cin>>pt;
    cout << "Nhap phan ao: ";cin>>ao;
}
void in(){
    if (ao >= 0)
    cout << pt << "+" << ao << "i" << endl;
    else 
    cout << pt << "-" << -ao << "i" << endl;
}
float modunle(){
    return sqrt(pt * pt + ao * ao);
}
};
class SP2 : public SP1 {
    public:
    bool operator = (SP2 a){
        pt = a.pt;
        ao = a.pt;
        return true;
    }
    bool operator > (SP2 a){
        return this -> module() > a.module();
    }
};
int main(){
    int n;
    cout << "Nhap so luong so phuc (toi da 10): ";
    cin >> n;
    
    SP2 ds[10];
    
    for (int i = 0, i < n; i++){
        cout << "\nNhap so phuc thu" << i + 1 <<endl;
        ds[1].nhap();
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++){
            if (ds[j] > ds[i]) {
                SP2 temp;
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    cout << "\nDanh sach so phuc sau khi sap xep giam dan theo module:\n";
    for (int i = 0; i < n; i++){
        cout << "So phuc" << i + 1 << "(Module = " << ds[1].module() << "): ";
        ds[i].in();
    }
    return 0;
}