#include <iostream>

using namespace std;

int foo(int n) {
    if (n == 0)
        return 0;
    // 1 + foo(1) = 1 + 1 + foo(0) = 2
    return 1 + foo(n / 10);
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    // 12
    cout << foo(n);
    return 0;
}