#include <iostream>

using namespace std;

int fib (int n) {
    // 0 1
    //fib(1) = 1 va fib(0) = 0
    if (n <= 1) {
        return n;
    }
    else {
        // fib(2) + fib(1) = 1 + fib(2)
        //fib(2) = fib(1) + fib(0) = 1
        //==> fib(3) = 2
        return fib(n-1) + fib(n-2);
    }
}

int main(int argc, char const *argv[]) {
    int n;
    cout << "Nhap so nguyen n : ";
    //vd nhap 3
    cin >> n;
    cout << fib(n);
    return 0;
}
