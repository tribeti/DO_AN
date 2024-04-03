#include <iostream>

using namespace std;

void sieve(int n, bool isPrime[]) {
    for (int i = 2; i <= n; i++) {
        isPrime[i] = true;
    }

    isPrime[0] = isPrime[1] = false; // 0 và 1 không phải số nguyên tố

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    bool isPrime[n + 1]; // Mảng đánh dấu số nguyên tố
    sieve(n, isPrime); // Tính toán số nguyên tố

    cout << "Cac so nguyen to nho hon hoac bang " << n << " la: ";
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}