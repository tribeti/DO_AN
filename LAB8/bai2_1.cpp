#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap n lon hon 2 : ";
    cin >> n;
    bool check[n + 1];
    // tạo mảng có phần tử từ 2 -> n và đặt tất cả phần tử đều là số nguyên tố
    for (int i = 2; i <= n; i++) {
        check[i] = true;
    }

    // kiểm tra có phải số nguyên tố hay không
    for (int i = 2; i <= n; i++) {
        // nếu là số nguyên tố thì vòng for sẽ cho các bội số của nó không là số nguyên tố
        if (check[i] == true) {
            // vd i = 3 thì j = 6 và bước nhảy tiếp theo j = 9 và tương tự cho đến khi bằng n
            for (int j = 2 * i; j <= n; j += i) {
                check[j] = false;
            }
        }
    }

    // in số nguyên tố
    for (int i = 2; i <= n; i++) {
        if (check[i] == true) {
            cout << i << " ";
        }
    }
}