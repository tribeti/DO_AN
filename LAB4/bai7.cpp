#include <iostream>

using namespace std;

int foo(int n) {
    if (n == 0) {
        return 0;
    }
    int a = n % 10; 
    if (a > foo(n/10)) {
        return a;
    } 
    else {  
        return foo(n/10); 
    }
}
// Ví dụ với số 3859 :

// Gọi findMaxDigit(3859) -> a = 9 
// => Gọi tiếp findMaxDigit(385) -> a = 5 
// => Gọi tiếp findMaxDigit(38) -> a = 8 
// => Gọi tiếp findMaxDigit(3) -> a = 3
// So sánh lần lượt các chữ số: Như vậy, chữ số lớn nhất là 9.

// ví dụ khác 197 :
// foo(197) : a = 7 và so sánh với foo(19)
// foo(19) : a = 9 và so sánh với foo(1)
// foo(1) : a = 1 và so sánh với foo(0) = 0
// điều kiện thỏa mãn (a > foo(0)) => foo(1) = 1
// tiếp tục so sánh 1 với 9 ta có 9 > foo(1) => return 9 (foo(19))
// tiếp tục so sánh 7 với 9 ta có 9 > 7 (không thỏa hàm if) => return foo(19)
int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    cout << foo(n);
    return 0;
}