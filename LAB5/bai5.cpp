#include <iostream>
using namespace std;

void removeAt(int arr[], int &size, int k) {
    // Kiểm tra nếu vị trí k hợp lệ
    if (k < 0 || k >= size) {
        cout << "Vi tri khong hop le!" << endl;
        return;
    }
    // Di chuyển các phần tử đằng sau vị trí k về trước một vị trí
    for (int i = k; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}

void addAt(int arr[], int &size, int k , int num) {
    // Kiểm tra nếu vị trí k hợp lệ
    if (k < 0 || k > size) {
        cout << "Vi tri khong hop le!" << endl;
        return;
    }
    size++;
    for (int i = size - 1; i > k; i--) {
        arr[i] = arr[i - 1];
    }
    arr[k] = num;
}

void removeDuplicates(int arr[], int &size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j] && i != j) {
                removeAt(arr, size, j);
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Vị trí muốn xóa
    // removeAt(arr, size, k);
    removeDuplicates(arr, size);
    // addAt(arr, size, 3, 10);
    cout << "Mang sau khi xoa tai vi tri " << k << ": ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}