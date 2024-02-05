#include <iostream>

using namespace std;

void dectobin (int n) {
    if (n > 0) {
        // 13   6   3   1
        dectobin(n/2);
        // 6   3   1   0
        cout << n % 2;
        // 1   0   1   1
        //in nguoc va la vi phan tren la minh phan tich con may tinh la se thuc hien tu dectobin(1)
    }
}
int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    // vd nhap 13
    dectobin(n);
    return 0;
}
