#include <iostream>

using namespace std;

void foo (int n) {
    if (n > 0) {
        // 3    2   1
        cout << n % 10;
        // 12   1   0
        foo(n / 10);
    }
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    // 123
    foo(n);
    return 0;
}
