#include <iostream>
#include <vector>

std::vector <int> A;
int main() {
    int n;
    int i = 0;
    std::cin >> n;
    // 12 /2 = 6 / 2 = 3 / 2 = 1 / 2 = 0 (dung vong lap)
    while (n > 0) {
        // them phan du vao trong vector
        A.push_back(n % 2);
        n = n / 2; 
        i++; 
    } 
    // in vector nguoc
    for (int j = i - 1; j >= 0; j--) {
        std::cout << A[j];
    }
    return 0;
}