#include <iostream>

using namespace std;
// s = A(1 + nr) = A + A * n * r
double foo(int n) {
    if (n == 1) {
        return 1000 * 0.12 * n;
    }
    else {
        // foo(3) = foo(1) + foo(2)
        // foo(2) = foo(1) + foo(1)
        return foo(1) + foo(n-1);
    }
}

int main() {
    // double s = 1000 * ( 0.12* 12);
    // double d = 1000 * ( 0.12* 18);
    // double f = 1000 * ( 0.12* 30);
    // cout << s + d << endl;
    // cout << f << " USD" << endl;
    cout << 1000 + foo(30) << " USD";
    return 0;
}