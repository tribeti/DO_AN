#include <iostream>

using namespace std;

int foo (char *n) {
    if (*n == '\0') {
        return 0;
    }
    return 1 + foo(n + 1);
}

int main(int argc, char const *argv[]) {
    // *n trỏ tới giá trị abcd
    char *n = "abcd";
    cout << foo(n);
    return 0;
}