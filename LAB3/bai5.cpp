#include <iostream>

using namespace std;
int sum (int n) {
    if (n == 0) {
        return 1;
    }
    else {
        // (2 * 3 + 1) + sum(2)
        // = 7 + (2 * 2 + 1) + sum(1)
        // = 12 + (2 * 1 + 1) + sum(0)
        // = 15 + 1 = 16
        return (2 * n + 1) + sum(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen n lon hon 0 : ";
    cin >> n;
    //vd nhap 3
    if (n < 0) {
        main();
    }
    cout << sum(n);
    return 0;
}