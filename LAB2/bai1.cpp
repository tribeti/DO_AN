#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n , s;
    cin >> n;
    while (n > 0) {
        // tong cong voi hang don vi
        s = s + n % 10;
        // 123 / 10 = 12
        n = n /10;
    }
    cout << s;
    return 0;
}
