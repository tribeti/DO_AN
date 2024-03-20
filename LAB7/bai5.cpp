#include <iostream>
using namespace std;

const int MAX_N = 12;
// abs là trị tuyệt đối |-1| = 1
bool isSafe(int queens[], int row, int col, int n, int numQueens) {
    for (int prevRow = 0; prevRow < row; prevRow++) {
        int prevCol = queens[prevRow];
        if (prevCol == col || abs(prevRow - row) == abs(prevCol - col)) {
            return false;
        }
    }
    return true;
}

void printQueensPositions(int queens[], int numQueens, int n) {
    for (int i = 0; i < numQueens; i++) {
        cout << "(" << i + 1 << ", " << queens[i] + 1 << ") ";
    }
    cout << endl;
}

void solveNQueens(int queens[], int &count, int row, int numQueens, int n) {
    if (numQueens == n) {
        ++count;
        cout << "Solution " << count << ": ";
        printQueensPositions(queens, numQueens, n);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(queens, row, col, n, numQueens)) {
            queens[numQueens] = col;
            solveNQueens(queens, count, row + 1, numQueens + 1, n);
        }
    }
}

int main() {
    int n;
    do {
        cout << "Enter the number of queens (up to 12): ";
        cin >> n;
    } while (n < 1 || n > MAX_N);

    int queens[MAX_N]; // Khai báo mảng để lưu trữ vị trí của các quân hậu
    int count = 0;
    solveNQueens(queens, count, 0, 0, n);
    cout << "Number of solutions: " << count << endl;
    return 0;
}

/* cách code chạy :
    solveNQueens(queens , 0 , 0 , 0 , 4);

    -> check hàm safe (queens , 0 , 0 , 4 , 0) (1)
                safe (queens , 0 , 1 , 4 , 0) 
                safe (queens , 0 , 2 , 4 , 0) 
                safe (queens , 0 , 3 , 4 , 0) 

        (1) return true -> queen[0] = 0 và gọi solve(queens , 0 , 1 , 1 , 4) (2)

        (2) return true -> q[1] = 2 và gọi solve(q , 0 , 2 , 2 , 4)

    đã hiểu nhưng vì rối và dài dòng quá nên không giải nữa . Xin cảm ơn :)
*/