#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    int n , s = 0;
    cin >> n;
    while (n > 0) {
        // tong cong voi hang don vi
        s = s + n % 10;
        // 123 / 10 = 12
        n = n /10;
    }
    // vong for neu thay hoi
    // for (; n > 0; n = n / 10) {
    //     // tong cong voi hang don vi
    //     s = s + n % 10;
    //     // 123 / 10 = 12
    // }
    cout << s;
    return 0;
}