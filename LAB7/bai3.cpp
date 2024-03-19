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
    if (n  < 1 || n > 20 || k < 1 || k > 20 || k > n) {
        cout << "Khong hop le!" << endl;
        main();
    }
    print_combination(0);
    return 0;
}

/* cách code chạy 
    lưu ý : break khi thực hiện sẽ thoát khỏi vòng lặp
    với n = 3 , k = 2
    print(0) đầu tiên i = 1 => arr[0] = 1 và print(1) (1)
    (1) -> arr[1] = 2 và print(2) ==> {1 , 2}
    đồng thời arr[1] = 3 và print(2) ==> {1 , 3}

    i = 2 =>  arr[0] = 2 và print(1) (2)

    (2) -> arr[1] = 1 và print(2) ==> {2 , 1}
    đồng thời arr[1] = 3 và print(2) ==> {2 , 3}

    i = 3 -> arr[0] = 3 và print(1) (3)

    (3) -> arr[1] = 1 và print(2) ==> {3 , 1}
    và arr[1] = 2 và print(2) ==> {3 , 2}
*/