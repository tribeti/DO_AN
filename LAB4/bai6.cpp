#include <iostream>

using namespace std;

int foo(int n) {
    int a , b = 0;
    if (n == 0)
        return 0;
    else {
        // tach chu so (4 , 5)
        a = n % 10;
        // xet dieu kien (false , true)
        if (a % 2 == 1) {
            // neu thoa man thi tang 1 (b = 0 , b = 1)
            b++;
        }
    }
    // 0 + foo(5) => 1 + foo(0) = 1
    return b + foo(n / 10);
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    // 54
    cout << foo(n);
    return 0;
}