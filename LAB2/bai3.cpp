#include <iostream>

using namespace std;
int main(int argc, char const *argv[]) {
    int a, b = 0;
    std::cin >> a; //123
    int temp = a; //123
    while (temp > 0) {
        // lay so hang don vi -> 3
        int digit = temp % 10;
        // 0 * 10 + 3
        b = b * 10 + digit;
        // 123 / 10 = 12
        temp = temp / 10;
    }
    // xet dieu kien de kiem tra
    if (a == b) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    return 0;
}