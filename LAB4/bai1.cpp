#include <iostream>

using namespace std;

int foo (int n) {
    if (n == 0) {
        return 2;
    }
    else {
        // 2 * foo(4) = 2 * 2 * foo(3) 
        // = 2 * 2 * 2 * foo(2)
        // = 2 * 2 * 2 * 2 * foo(1) 
        // = 2 * 2 * 2 * 2 * 2 * foo(0) = 2 ^ 6 = 64
        return 2 * foo(n-1);
    }    
}

int main(int argc, char const *argv[]) {
    // sau 5h
    cout << foo(5);
    return 0;
}
