#include <iostream>
using namespace std;

// create selection sort function
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}
/* cơ chế chạy :
    int arr[] = {5, 2, 9, 1, 7};
    n = 5
    B1 :
        i = 0 , minIndex = 0 . Chạy vòng lặp j từ 1 tới 5 ta được arr[3] = 1 nhỏ nhất
        => đổi vị trí arr[0] với arr[3]
        => {1 , 2 , 9 , 5 , 7}
    B2 :
        i = 1 , minIndex = 1 . Chạy vòng lặp j từ 2 đến 5 không có phần tử nào nhỏ hơn
        => giữ nguyên
    B3 :
        i = 2 , minIndex = 2 . Chạy vòng lặp j từ 3 đến 5 có arr[3] = 5 nhỏ nhất
        => đổi vị trí arr[2] với arr[3]
        => {1 , 2 , 5 , 9 , 7}
    B4 :
        i = 3 , minIndex = 3 . Chạy vòng lặp j từ 4 đến 5 có arr[4] = 7 nhỏ nhất
        => đổi vị trí arr[3] với arr[4]
        => {1 , 2 , 5 , 7 , 9}
    B5 :
        i = 4 , minIndex = 4 . Chạy vòng lặp j là 5
        => giữ nguyên . End
*/
int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}