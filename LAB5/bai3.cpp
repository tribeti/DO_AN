#include <iostream>

using namespace std;

// in thứ tự từ số chẵn đến số lẻ đến 0
void Print_Even_Odd_0(int A[], int n) {
    cout << "Print Even -> Odd -> 0: ";
    for (int i = 0; i < 10; i++) {
        if (A[i] % 2 == 0 && A[i] != 0) {
            cout << A[i] << " ";
        }
    }
    for (int i = 0; i < 10; i++) {
        if (A[i] % 2 == 1 && A[i] != 0) {
            cout << A[i] << " ";
        }
    }
    for (int i = 0; i < 10; i++) {
        if (A[i] == 0) {
            cout << A[i] << " ";
        }
    }
}

// in thứ tự từ số 0 đến số âm đến số dương
void Print_0_Negative_Positive(int A[], int n) {
    cout << "Print 0 -> Am -> Duong: ";
    for (int i = 0; i < 10; i++) {
        if (A[i] == 0) {
            cout << A[i] << " ";
        }
    }
    for (int i = 0; i < 10; i++) {
        if (A[i] < 0) {
            cout << A[i] << " ";
        }
    }
    for (int i = 0; i < 10; i++) {
        if (A[i] > 0) {
            cout << A[i] << " ";
        }
    }
}

int main(int argc, char const *argv[]) {
    int A[10] = {0, -1, 2, 3, -4, 5, 6, 7, 8, -9};
    
    // for (int i = 0; i < 10; i++) {
    //     cout << A[i] << " ";
    // }
    // Print_Even_Odd_0(A, 10);
    Print_0_Negative_Positive(A, 10);
    return 0;
}