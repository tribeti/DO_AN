#include <iostream>

using namespace std;

bool foo(int n) {
    int a , b;
    if (n == 0) {
        return 0;
    }
    else {
        a = n % 10;
        b = (n / 10) % 10;
        if (a % 2 == 1 || b % 2 == 1) {
            return false;
        }
        foo(n / 10);
    }
    return true;
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    cout << boolalpha << foo(n);
    return 0;
}