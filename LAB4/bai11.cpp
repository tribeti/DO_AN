#include <iostream>

using namespace std;

int foo(int n) {
    if (n < 10) {
        return n;
    }
    else {
        return foo(n / 10);
    }
}

int main() {
    int n;
    cin >> n; 
    cout << foo(n);
    return 0;
}