#include <iostream>

using namespace std;

int foo(int n) {
    int a , b, max = 0;
    if (n == 0) {
        return 0;
    }
    else {
        a = n % 10;
        b = (n / 10) % 10; 
        max = a;
        if (a < b) {
            max = b;
        }
        foo(n / 10);
    }
    return max;
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    cout << foo(n);
    return 0;
}