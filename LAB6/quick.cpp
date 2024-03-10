#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
/*  (1) partition(arr, 0, 5) :
    pivot = arr[5] = 7
    i = low - 1 = -1
    vòng lặp for{
        B1 :
            j = 0 , arr[0] = 5 < pivot
            => i = 0
            => swap(arr[0], arr[j])
            ==> {5, 3, 8, 4, 2, 7}
        B2 :
            j = 1 , arr[1] = 3 < pivot
            => i = 1
            => swap(arr[1], arr[j])
            ==> {5, 3, 8, 4, 2, 7}
        B3 :
            j = 2 , arr[2] = 8 > pivot
            ==> giữ nguyên
        B4 :  
            j = 3 , arr[3] = 4 < pivot
            => i = 2
            => swap(arr[2], arr[j])
            ==> {5, 3, 4, 8, 2, 7}
        B5 :
            j = 4 , arr[4] = 2 < pivot
            => i = 3
            => swap(arr[3], arr[j])
            ==> {5, 3, 4, 2, 8, 7}
    }
    swap(arr[4], arr[high]) ==> {5, 3, 4, 2, 7, 8}
    return 4
*/

/*  (3) partition(arr, 0, 3)
    pivot = arr[3] = 2
    i = low - 1 = -1
    {5, 3, 4, 2, 7, 8}
    vòng lặp for{
        B1 :
            j = 0 , arr[0] = 5 > pivot
            ==> giữ nguyên
        B2 :
            j = 1 , arr[1] = 3 > pivot
            ==> giữ nguyên
        B3 :
            j = 2 , arr[2] = 4 > pivot
            ==> giữ nguyên
    }
    swap(arr[0], arr[high]) ==> {2, 3, 4, 5, 7, 8}
    return 0;
*/

/*  (5) partition(arr, 1, 3)
    {2, 3, 4, 5, 7, 8}
    pivot = arr[3] = 5
    i = low - 1 = 0
    vòng lặp for {
        B1 :
            j = 1 , arr[1] = 3 < pivot
            => giữ nguyên
        B2 :
            j = 2 , arr[2] = 4 < pivot
            => giữ nguyên
    }
    swap(arr[3], arr[high]) ==> {2 , 3 , 4 , 5 , 7 , 8}
    return 3
*/

/*  (7) partition(arr, 1, 2)
    {2, 3, 4, 5, 7, 8}
    pivot = arr[2] = 4
    i = low - 1 = 0
    vòng lặp for {
        j = 1 , arr[1] = 3 < pivot
        => giữ nguyên , i = 1
    }
    swap(arr[2], arr[high]) ==> {2 , 3 , 4 , 5 , 7 , 8}
    return 2
*/
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}
/* cơ chế chạy :
    quickSort(arr, 0, 5) (0)
    kiểm tra điều kiện => thỏa mãn
    => pivotI = partition(arr, 0, 5) (1) = 4
    quickSort(arr, 5, 5)
    quickSort(arr, 0, 3) (2)
    (2) :
        pivotI = partition(arr, 0, 3) (3) = 0
        quickSort(arr, 0, -1)
        quickSort(arr, 1, 3) (4)
    (4) :
        pivotI = partition(arr, 1, 3) (5) = 3
        quickSort(arr, 4, 3)
        quickSort(arr, 1, 2) (6)
    (6) :
        pivotI = partition(arr, 1, 2) (7) = 2
        quickSort(arr, 1, 1)
        quickSort(arr, 3, 2)
*/
int main() {
    int numbers[] = {5, 3, 8, 4, 2, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    quickSort(numbers, 0, size - 1);
    for (int i = 0; i < size; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;
    return 0;
}