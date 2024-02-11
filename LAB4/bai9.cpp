#include <iostream>

using namespace std;

int logarit(int n) {
    if(n <= 1) {
        return 0;
    }
    else {
        return 1 + logarit(n / 2);
    }
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    cout << logarit(n);
    return 0;
}