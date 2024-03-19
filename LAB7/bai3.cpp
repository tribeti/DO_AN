#include <iostream>
using namespace std;

int n, k;
int arr[100];

void print_combination(int index) {
    if (index == k) {
        for (int i = 0; i < k; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++) {
        bool chosen = false;
        for (int j = 0; j < index; j++) {
            if (arr[j] == i) {
                chosen = true;
                break;
            }
        }
        if (!chosen) {
            arr[index] = i;
            print_combination(index + 1);
        }
    }
}

int main() {
    cout << "Nhap n va k: ";
    cin >> n >> k;
    print_combination(0);
    return 0;
}