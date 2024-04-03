#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;

    int a = 0, b = 1;
    int c;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

// fib(3)
// a = 0 , b = 1 , c
// với i = 2 -> c = 1 , a = 1 , b = 1
// với i = 3 -> c = 2 , a = 1 , b = 2
// return b = 2
int main() {
    int n;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;
    cout << "So Fibonacci thu " << n << " la: " << fibonacci(n) << endl;
    return 0;
}

