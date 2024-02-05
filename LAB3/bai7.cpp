#include <iostream>

using namespace std;
int sum (int n) {
    if (n == 1) {
        return 1;
    }
    else {
        // 3 * 3 = 3 ^ 2 + sum(2)
        // 9 + 2 * 2 + sum(1)
        // 13 + 1 = 14
        return n * n + sum(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen n lon hon 0 : ";
    cin >> n;
    // vd nhap so 3
    if (n <= 0) {
        main();
    }
    cout << sum(n);
    return 0;
}