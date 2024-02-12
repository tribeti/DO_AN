#include <iostream>

using namespace std;

bool foo(int n) {
    if (n == 0)
        return true;
    // nếu chia 2 là dư khác 0 tức là số lẻ trả về false
    if (n % 2 != 0)
        return false;
    return foo(n/10);
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    cout << boolalpha << foo(n);
    return 0;
}