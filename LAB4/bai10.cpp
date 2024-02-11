#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a; // Trường hợp cơ sở: nếu b = 0, GCD(a, 0) = a
    }
    // Sử dụng tính chất: GCD(a, b) = GCD(b, a % b)
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cout << "Nhập hai số nguyên dương: ";
    cin >> a >> b;
    cout << "Ước chung lớn nhất của " << a << " và " << b << " là: " << gcd(a, b) << endl;
    return 0;
}