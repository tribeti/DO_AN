#include <iostream>

using namespace std;

int foo(int n) {
    int a , b = 0;
    if (n == 0)
        return 0;
    else {
        a = n % 10;
        if (a % 2 == 1) {
            b++;
        }
    }
    return b + foo(n / 10);
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    cout << foo(n);
    return 0;
}