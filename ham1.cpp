#include <iostream>

double tinhDienTich(double banKinh) {
    const double PI = 3.14159;
    return PI * banKinh * banKinh;
}

double tinhDienTich(double dai, double rong) {
    return dai * rong;
}

int tinhDienTich(int dai, int rong) {
    return dai * rong;
}

int main() {
    double dtTron = tinhDienTich(5.0); 
    std::cout << "1. Dien tich hinh tron (r=5.0): " << dtTron << std::endl; 

    double dtHCN_Double = tinhDienTich(4.5, 2.0); 
    std::cout << "2. Dien tich HCN thuc (4.5 x 2.0): " << dtHCN_Double << std::endl; 

    int dtHCN_Int = tinhDienTich(4, 5); 
    std::cout << "3. Dien tich HCN nguyen (4 x 5): " << dtHCN_Int << std::endl; 
    
    return 0;
}

