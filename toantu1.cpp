#include <iostream>

class PhanSo {
public:
    int tuso, mauso;

    PhanSo(int t = 0, int m = 1) : tuso(t), mauso(m) {}

    PhanSo operator+(const PhanSo& ps) {
        int t = this->tuso * ps.mauso + this->mauso * ps.tuso;
        int m = this->mauso * ps.mauso;
        return PhanSo(t, m);
    }

    PhanSo operator+(int soNguyen) {
        int t = this->tuso + soNguyen * this->mauso;
        return PhanSo(t, this->mauso);
    }

    void in() {
        std::cout << tuso << "/" << mauso << std::endl;
    }
};

int main() {
    int x = 10, y = 20;
    std::cout << "1. Cong hai so nguyen: " << x + y << std::endl;
    
    PhanSo ps1(1, 2);
    PhanSo ps2(1, 3);
    
    PhanSo psTong = ps1 + ps2; 
    std::cout << "2. Cong hai phan so (1/2 + 1/3): ";
    psTong.in();

    PhanSo psCongSo = ps1 + 2; 
    std::cout << "3. Cong phan so voi so nguyen (1/2 + 2): ";
    psCongSo.in();

    return 0;
}


