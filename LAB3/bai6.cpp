#include <iostream>

using namespace std;
//tuong tu nhu bai 5 thay dau cong thanh dau nhan (khong giai thich)
int sum (int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return (2 * n + 1) * sum(n - 1);
    }
}

int main() {
    int n;
    cout << "Nhap so nguyen n lon hon 0 : ";
    cin >> n;
    if (n < 0) {
        main();
    }
    cout << sum(n);
    return 0;
}