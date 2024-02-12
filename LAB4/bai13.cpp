#include <iostream>

using namespace std;

// công thức có sẵn đề cho
int foo (int n , int k) {
    if (k == 0 || n == k) {
        return 1;
    }
    else if (k > n) {
        return 0;
    }
    else {
        return foo(n - 1 , k) + foo(n - 1 , k - 1);
    }
}

int main() {
    int a , b;
    if (a < 0 || b < 0) {
        main();
    }
    cin >> a >> b;
    cout << foo(a,b);
    return 0;
}