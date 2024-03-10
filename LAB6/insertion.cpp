#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
/* cơ chế chạy :
    int arr[] = {5, 2, 9, 1, 7}
    n = 5
    B1 :
        key = 2 , j = 0 , arr[0] = 5 (thỏa mãn)
        => arr[1] = 5 , j = -1 
        arr[0] = 2
        ==> {2, 5, 9, 1, 7}
    B2 :
        key = 9 , j = 1 , arr[1] = 2 (không thỏa mãn)
        ==> giữ nguyên
    B3 :
        key = 1 , j = 2 , arr[2] = 9 (thỏa mãn)
        => arr[3] = 9 , j = 1 , arr[1] = 5 > key (thỏa mãn)
            => arr[2] = 5 ,  j = 0 , arr[0] = 2 > 1 (thỏa mãn)
                => arr[1] = 2 , j = -1 , arr[0] = 1
        
        ==> {1, 2, 5, 9, 7}
    B4 :
        key = 7 , j = 3 , arr[3] = 9 (thoả mãn)
        => arr[4] = 9 , j = 2 , arr[2] = 5 < key (không thỏa mãn)
        arr[3] = 7
        ==> {1 , 2 , 5 , 7 , 9}
    B5 :
        i = 5 không bé hơn n (n = 5) nên dừng vòng lặp . End
*/
int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}