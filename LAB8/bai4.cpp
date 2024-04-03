#include <iostream>
using namespace std;

// Hàm tìm giá trị tối đa của cái túi
int knapSack(int W, int wt[], int val[], int n) {
    int K[n + 1][W + 1]; // Khởi tạo ma trận lưu trữ giá trị tối ưu

    // Khởi tạo ma trận với giá trị 0
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
        }
    }

    // Lập qua từng đồ vật và trọng lượng còn lại
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            if (wt[i - 1] <= w) {
                // Nếu đồ vật được chọn
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            } else {
                // Nếu đồ vật không được chọn
                K[i][w] = K[i - 1][w];
            }
        }
    }

    // Trả về giá trị tối đa của cái túi
    return K[n][W];
}

int main() {
    int val[] = {60, 100, 120}; // Giá trị của các đồ vật
    int wt[] = {10, 20, 30};    // Trọng lượng của các đồ vật
    int W = 50;                 // Trọng lượng tối đa của cái túi
    int n = sizeof(val) / sizeof(val[0]); // Số lượng đồ vật = 3

    cout << "Gia tri toi da cua cai tui la: " << knapSack(W, wt, val, n) << endl;

    return 0;
}

/* gỉai thích qúa trình code chạy :
    ma trận K :           0     10     20     30     50
                    1     0     60     60     60     60
                    2     0     60     100    160    160
                    3     0     60     100    160    220
*/