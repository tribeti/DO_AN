#include <iostream>

using namespace std;

void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    int leftSize = mid - left + 1;
    int rightSize = right - mid;
    int leftArr[leftSize], rightArr[rightSize];

    for (i = 0; i < leftSize; i++)
        leftArr[i] = arr[left + i];
    for (j = 0; j < rightSize; j++)
        rightArr[j] = arr[mid + 1 + j];

    // Vòng lặp này chạy khi vẫn còn phần tử trong cả leftArr và rightArr.
    // Trong mỗi lần lặp, nó so sánh leftArr[i] và rightArr[j].
    // Nếu leftArr[i] <= rightArr[j], nghĩa là phần tử tại leftArr[i] nhỏ hơn hoặc bằng phần tử tại rightArr[j], phần tử leftArr[i] được ghi vào arr[k], sau đó tăng i và k lên 1 đơn vị.
    // Ngược lại, nếu leftArr[i] > rightArr[j], phần tử rightArr[j] được ghi vào arr[k], sau đó tăng j và k lên 1 đơn vị.
    // Quá trình này tiếp tục cho đến khi một trong hai mảng con (leftArr hoặc rightArr) hết phần tử.
    i = 0, j = 0, k = left;
    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }
    // Vòng lặp này chạy khi mảng con trái (leftArr) còn phần tử chưa được ghi vào mảng gốc (arr).
    // Nó sao chép các phần tử còn lại của leftArr vào arr, bắt đầu từ vị trí k và tiếp tục tăng i và k.
    while (i < leftSize) {
        arr[k++] = leftArr[i++];
    }
    // vòng dưới tương tự
    while (j < rightSize) {
        arr[k++] = rightArr[j++];
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    cout << "Mang sau khi sap xep la: \n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

/*  Giải thích quá trình code chạy:
    mergeSort(arr, 0, 5) :
        mid = 2
        mergeSort(arr, 0, 2) (1) {12, 11, 13} 
        mergeSort(arr, 3, 5) (2) {5, 6, 7}
        merge(arr, 0, 2, 5) (3)

    (1) mergeSort(arr, 0, 2):
        mid = 1
        mergeSort(arr, 0, 1) (4) {12, 11}
        mergeSort(arr, 2, 2) {13}
        merge(arr, 0, 1, 2) (5)

        (4) mergeSort(arr, 0, 1):
            mid = 0
            merge(arr, 0, 0, 1) (6)

            (6) :
                leftSize = 1 , rightSize = 1
                leftArr[1] , rightArr[1]
                leftArr[0] = 12 , rightArr[0] = 11
                => {11, 12}
        
        (5) merge(arr, 0, 1, 2):
            leftSize = 2 , rightSize = 1
            leftArr[2] , rightArr[1]
            leftArr[0] = arr[0] = 11 , leftArr[1] = arr[1] = 12
            rightArr[0]  = arr[2] = 13
            => {11 , 12 , 13}

    (2) mergeSort(arr, 3, 5):
        mid =  4
        mergeSort(arr , 3 , 4) {5 , 6} (7)
        mergeSort(arr , 5 , 5) {7}
        merge(arr , 3 , 4 , 5) (8)

        (7) mergeSort(arr , 3 , 4)
            mid = 3
            merge(arr , 3 , 3 , 4) (9)

            (9) :
                leftSize = 1 , rightSize = 1
                leftArr[0] = arr[3] = 5 , rightArr[0] = arr[4] = 6
                => {5 , 6}

        (8) merge(arr , 3 , 4 , 5)
            leftSize = 2 , rightSize = 1
            leftArr[2] , rightArr[1]
            => {5 , 6 , 7}

    (3) merge(arr, 0, 2, 5)
        leftSize = 3 , rightSize = 3
        leftArr[3] , rightArr[3]
        => {11 , 12 , 13} , {5 , 6 , 7}
        Ta có 5 < 11 => arr[0] = 5
        Ta có 6 < 12 => arr[1] = 6
        Ta có 7 < 13 => arr[2] = 7
        => {5 , 6 , 7 , 11 , 12 , 13}
*/