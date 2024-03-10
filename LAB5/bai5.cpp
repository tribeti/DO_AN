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

void removeDuplicates(int arr[], int &size) {
    // Sắp xếp mảng để các phần tử trùng lặp nằm cạnh nhau
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // Biến k được khởi tạo với giá trị 0. Biến này sẽ theo dõi vị trí cuối cùng của các phần tử không trùng lặp trong mảng.
    // Vòng lặp for duyệt qua mảng từ phần tử thứ hai (vì phần tử đầu tiên luôn không trùng lặp với chính nó).
    // Trong mỗi lần lặp, giá trị của arr[i] (phần tử hiện tại) được so sánh với arr[k] (phần tử cuối cùng trong mảng không trùng lặp).
    // Nếu arr[i] khác arr[k], điều đó có nghĩa arr[i] là một phần tử mới, chưa xuất hiện trong mảng không trùng lặp. Trong trường hợp này, ta cần tăng giá trị của k lên 1 và gán giá trị của arr[i] vào arr[k]. Điều này đảm bảo rằng phần tử mới sẽ được thêm vào mảng không trùng lặp.
    // Nếu arr[i] bằng arr[k], điều đó có nghĩa arr[i] đã xuất hiện trong mảng không trùng lặp. Trong trường hợp này, ta bỏ qua arr[i] và tiếp tục vòng lặp.
    int k = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[k]) {
            k++;
            arr[k] = arr[i];
        }
    }
    // Cập nhật kích thước mảng mới
    size = k + 1;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5 ,4 , 2 , 6, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 2; // Vị trí muốn xóa
    // removeAt(arr, size, k);
    removeDuplicates(arr, size);
    cout << "Mang sau khi xoa tai vi tri " << k << ": ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}