#include <iostream>

using namespace std;
int sum (int n) {
    if (n == 0) {
        return 0;
    }
    else {
        // 3 + sum(2) = 3 + 2 + sum(1) = 3 + 2 + 1 + sum(0) = 6
        return n + sum(n - 1);
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