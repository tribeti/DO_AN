#include <iostream>

using namespace std;

void foo(int n , int arr[] , int i = 0) {
    if (i == n) {
        for (int j = 0; j < n; j++) {
            cout << arr[j];
        }
        cout << endl;
        return;
    }

    arr[i] = 0;
    foo(n , arr , i + 1);

    arr[i] = 1;
    foo(n , arr , i + 1);
}

int main() {
    int n;
    cout << "Nhap do dai day nhi phan: ";
    cin >> n;
    int arr[n];
    foo(n, arr);
    return 0;
}

/* Giải thích :
    foo(2, arr) :
        arr[0] = 0
        foo(2,arr,1) (1)
        // cập nhật arr[0] thành 1
        arr[0] = 1
        foo(2,arr,2) (2)

        (1) :
            arr[1] = 0
            foo(2,arr,2)
            arr[1] = 1
            foo(2,arr,2)
        
        (2) :
            arr[1] = 1
            foo(2,arr,2)
            arr[1] = 0
            foo(2,arr,2)
*/