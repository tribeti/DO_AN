#include <iostream>

using namespace std;

void foo (int n) {
    if (n > 0) {
        cout << n % 10;
        foo(n / 10);
    }
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    foo(n);
    return 0;
}
