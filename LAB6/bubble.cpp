#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}
/* cơ chế chạy :
    n = 5
    B1 :
        i = 0 , j = 0
        Ta có arr[0] = 5 > arr[1] = 2 
        => đổi vị trí arr[0] với arr[1]
        ==> {2, 5, 9, 1, 7}
        j = 1 . Ta có arr[1] = 5 < arr[2] = 9
        => {2, 5, 9, 1, 7}
        j = 2 . Ta có arr[2] = 9 > arr[3] = 1
        => đổi vị trí arr[2] với arr[3]
        ==> {2 , 5 , 1 , 9 , 7}
        j = 3 . Ta có arr[3] = 9 > arr[4] = 7
        => đổi vị trí arr[3] với arr[4]
        ==> {2 , 5 , 1 , 7 , 9}
        j = 4 không thỏa mãn điều kiện vòng lặp (j < n - i - 1 ==> j < 4)
        ==> {2 , 5 , 1 , 7 , 9}
    B2 :
        i = 1 , j = 0
        Ta có arr[0] = 2 < arr[1] = 5
        ==> giữ nguyên
        j = 1 . Ta có arr[1] = 5 > arr[2] = 1
        => đổi vị trí arr[1] với arr[2]
        ==> {2 , 1 , 5 , 7 , 9}
        j = 2 . Ta có arr[2] = 5 < arr[3] = 7
        ==> {2 , 1 , 5 , 7 , 9}
        j = 3 không thỏa mãn điều kiện vòng lặp (j < n - i - 1 ==> j < 3)
        ==> {2 , 1 , 5 , 7 , 9}
    B3 :
        i = 2 , j = 0
        Ta có arr[0] = 2 > arr[1] = 1
        => đổi vị trí arr[0] với arr[1]
        ==> {1 , 2 , 5 , 7 , 9}
        j = 1 . Ta có arr[1] = 2 < arr[2] = 5
        ==> {1 , 2 , 5 , 7 , 9}
        j = 2 không thỏa mãn điều kiện vòng lặp (j < n - i - 1 ==> j < 2)
    B4 :
        i = 3 , j = 0
        giữ nguyên cho đến khi j = 1 vì không thỏa điều kiện vòng lặp (j < 1)
    B5 :
        i = 4 không thỏa mãn điều kiện vòng lặp (i < n - 1 ==> i < 4) . End
*/
int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}