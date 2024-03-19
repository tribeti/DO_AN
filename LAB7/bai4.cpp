#include <iostream>
using namespace std;

int n;
int arr[100];

void print_partitions(int index, int value, int prev) {
    if (value == 0) {
        for (int i = 0; i < index; i++) {
            cout << arr[i];
            if (i != index - 1) {
                cout << " + ";
            }
        }
        cout << endl;
        return;
    }

    for (int i = prev; i <= value; i++) {
        arr[index] = i;
        print_partitions(index + 1, value - i, i);
    }
}

int main() {
    do {
        cout << "Nhap n (n < 30): ";
        cin >> n;        
    } while (n < 0 || n >= 30);
    print_partitions(0, n, 1);
    return 0;
}

/* cách code chạy :
    gọi hàm print (0 , 3 , 1)

    i = 1 :
        arr[0] = 1
        print (1 , 2 , 1) (1)
    
    i = 2 :
        arr[0] = 2
        print (1 , 1 , 2) (3)

    i = 3 :
        arr[0] = 3
        print (1 , 0 , 3)

    (1) -> arr[1] = 1 và print (2 , 1 , 1) (2)
    (2) -> arr[2] = 1 và print (3 , 0 , 1)
    ==> {1 , 1 , 1}

    (3) -> arr[1] = 1 và print (2 , 0 , 1)
    ==> {2 , 1}
*/