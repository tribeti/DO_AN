# include <iostream>
# include <random>
#include <bits/stdc++.h>

using namespace std;

// hàm tạo số ngẫu nhiên
int foo() {
    random_device seed;
    mt19937 gen{seed()};
    uniform_int_distribution<> dist{-100, 100}; // set min and max
    int guess = dist(gen); // generate number
    return guess;    
}

// mảng tĩnh sử dụng số ngẫu nhiên
void randomArray() {
    int B[10];
    for (int i = 0; i < 10; i++) {
        B[i] = foo();
    }

    for (int i = 0; i < 10; i++) {
        cout << B[i] << " ";
    }
}

// mảng được tạo từ số nguyên
void numArray() {
    int n , i = 1 , a;
    int A[i];
    cout << "N = ";
    cin >> n;
    while (n > 0) {
        a = n % 10;
        A[i] = a;
        n = n / 10;
        i++;
    }
    for (size_t i = 1; i < sizeof(A); i++) {
        cout << A[i] << " ";
    }
    
}

// nhập mảng và sắp xếp tăng dần
void InputArray () {
    int A[10];
    int n;
    for (int i = 0; i < 10; i++) {
        cin >> n;
        A[i] = n;
    }

    sort(A, A + 10);
    for (int i = 0; i < 10; i++) {
        cout << A[i] << " ";
    }
}

int main(int argc, char const *argv[]) {
    randomArray();
    numArray();
    // InputArray();
    return 0;
}