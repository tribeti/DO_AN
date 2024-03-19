#include <iostream>

using namespace std;

void printSubset(int subset[], int size) {
    for (int i = 0; i < size; i++) {
        cout << subset[i] << " ";
    }
    cout << endl;
}

void findSubsets(int arr[], int n, int k, int subset[], int start, int subsetSize) {
    if (subsetSize == k) {
        printSubset(subset, k);
        return;
    }

    // Duyệt qua các phần tử từ vị trí start
    for (int i = start; i < n; i++) {
        // Thêm phần tử hiện tại vào tập con
        subset[subsetSize] = arr[i];
        findSubsets(arr, n, k, subset, i + 1, subsetSize + 1);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int subset[k];
    findSubsets(arr, n, k, subset, 0, 0);
    return 0;
}

/* cách code chạy
    findSubsets(arr, 5, 3, subset, 0, 0);

    for (int i = 0; i < 5; i++) {
        subnet[Size] = arr[i];

        findSubsets(arr, 5, 3, subset, i + 1, Size + 1);
    }

    // i = 0 ta có subnet[0] = arr[0] = 1
    findSubsets(arr, 5, 3, subset, 1, 1); (1)

    // i = 1 ta có subnet[0] = arr[1] = 2
    findSubsets(arr, 5, 3, subset, 2, 1); (2)

    // i = 2 ta có subnet[0] = arr[2] = 3
    findSubsets(arr, 5, 3, subset, 3, 1); (3)

    (1) :
        for (i = 1 ; i < 5 ; i++) {
            subnet[Size] = arr[i];
            findSubsets(arr, 5, 3, subset, i + 1, Size + 1);
        }

        // i = 1 ta có subnet[1] = arr[1] = 2
        findSubsets(arr, 5, 3, subset, 2, 2); (4)

        // i = 2 ta có subnet[1] = arr[2] = 3
        findSubsets(arr, 5, 3, subset, 3, 2); (5)

    (4) :
        for (i = 2 ; i < 5 ; i++) {
            subnet[Size] = arr[i];
            findSubsets(arr, 5, 3, subset, i + 1, Size + 1);
        }

        // i = 2 ta có subnet[2] = arr[2] = 3
        findSubsets(arr, 5, 3, subset, 3, 3); (6)

        (6) -> in ra {1 , 2 , 3} sau đó i = 3
        => subnet[Size] = arr[3] = 4 => tiếp tục in ra
        -> {1 , 2 , 4}
        tương tự in ra {1 , 2 , 5}
    
    (5) :
        in ra {1 , 3 , 4}  và {1 , 3 , 5}
        

    còn lại tự giải đi lười quá :)
*/