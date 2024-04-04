#include <iostream>

using namespace std;

int fibonacci(int n) {
    int fib[n + 1];

    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i <= n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int main() {
    int n;
    cout << "Nhap so thu tu cua so Fibonacci can tinh: ";
    cin >> n;

    cout << "So Fibonacci thu " << n << " la: " << fibonacci(n) << endl;

    return 0;
}