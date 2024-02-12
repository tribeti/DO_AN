#include <iostream>

using namespace std;

int foo(int n) {
    // bé hơn 10 để trả về giá trị. Nếu lớn hơn hoặc bằng 10 thì chia 10
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