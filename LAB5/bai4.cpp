#include <iostream>
#include <cmath>

using namespace std;

// tìm số âm
void findNegative(int A[], int n) {
    for (size_t i = 0; i < n; i++) {
        if (A[i] < 0) {
            cout << A[i] << " ";
        }
    }
}

// tìm số lớn nhất
void findMax(int A[], int n) {
    int max = A[0];
    for (size_t i = 0; i < n; i++) {
        if (A[i] > max) {
            max = A[i];
        }
    }
    cout << max;
}

// tìm số chẵn
void findEven(int A[], int n) {
    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            cout << A[i] << " ";
        }
    }
}

// kiểm tra số nguyên tố
bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    int sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// tìm số nguyên tố
void findPrime(int A[], int n) {
    for (int i = 0; i < n; i++) {
        if (isPrime(A[i]) == true) {
            cout << A[i] << " ";
        }
    }
}  

int main(int argc, char const *argv[]) {
    int A[10] = {0, 1, -2, 3, -4, 5, 6, 7, 8, -9};
    // findNegative(A, 10);
    // findMax(A, 10);
    // findEven(A, 10);
    findPrime(A, 10);
    return 0;
}