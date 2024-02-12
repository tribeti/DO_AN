#include <iostream>

using namespace std;

int logarit(int n) {
    if(n <= 1) {
        return 0;
    }
    else {
        // tăng số mũ rồi thực hiện đệ quy chia 2
        return 1 + logarit(n / 2);
    }
}

int main(int argc, char const *argv[]) {
    int n;
    cin >> n;
    cout << logarit(n);
    return 0;
}