#include <iostream>
using namespace std;

int n;
int arr[100];

void print_partitions(int index, int value, int prev) {
    if (value == 0) {
        // In ra phân tích số
        for (int i = 0; i < index; i++) {
            cout << arr[i];
            if (i != index - 1) {
                cout << " + ";
            }
        }
        cout << endl;
        return;
    }

    // Thử các giá trị từ prev đến value
    for (int i = prev; i <= value; i++) {
        arr[index] = i;
        print_partitions(index + 1, value - i, i);
    }
}

int main() {
    cout << "Nhap n (n <= 30): ";
    cin >> n;
    print_partitions(0, n, 1);
    return 0;
}