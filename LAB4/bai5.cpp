#include <iostream>

using namespace std;

int foo(int n) {
    if (n == 0)
        return 0;
    return 1 + foo(n / 10);
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    cout << foo(n);
    return 0;
}