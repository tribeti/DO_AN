#include <iostream>
#include <algorithm>
using namespace std;

// in thứ tự từ số âm đến số 0 đến số dương
void Print_Negative_0_Positive(int A[], int n) {
    int B[n];
    for (int i = 0; i < 10; i++) {
        if (A[i] < 0) {
            B[i] = A[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        if (A[i] == 0) {
            B[i] = A[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        if (A[i] > 0) {
            B[i] = A[i];
        }
    }
    cout << "Print Am -> 0 ->  Duong: ";
    for (size_t i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
}

int main(int argc, char const *argv[]) {
    int A[10] = {0, -1, 2, 3, -4, 7, 6, 5, 8, -9};
    sort(A, A + 10);
    Print_Negative_0_Positive(A, 10);
    return 0;
}