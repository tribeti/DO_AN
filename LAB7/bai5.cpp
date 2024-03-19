#include <iostream>
using namespace std;

const int N = 8; // Kích thước bàn cờ cố định 8x8

bool isSafe(int queens[], int row, int col, int numQueens) {
    for (int prevRow = 0; prevRow < row; ++prevRow) {
        int prevCol = queens[prevRow];
        if (prevCol == col || abs(prevRow - row) == abs(prevCol - col)) {
            return false;
        }
    }
    return true;
}

void printBoard(int queens[], int numQueens) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            bool isQueen = false;
            for (int q = 0; q < numQueens; ++q) {
                if (queens[q] == j && i == q) {
                    isQueen = true;
                    break;
                }
            }
            if (isQueen) {
                cout << "Q ";
            } else {
                cout << ". ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void solveNQueens(int queens[], int &count, int row = 0, int numQueens = 0) {
    if (numQueens == N) {
        ++count;
        cout << "Solution " << count << ":\n";
        printBoard(queens, numQueens);
        return;
    }

    for (int col = 0; col < N; ++col) {
        if (isSafe(queens, row, col, numQueens)) {
            queens[numQueens] = col;
            solveNQueens(queens, count, row + 1, numQueens + 1);
        }
    }
}

int main() {
    int numQueens;
    do {
        cout << "Enter the number of queens (up to 12): ";
        cin >> numQueens;
    } while (numQueens < 1 || numQueens > 12);

    int queens[N]; // Khai báo mảng để lưu trữ vị trí của các quân hậu
    int count = 0;
    solveNQueens(queens, count);
    cout << "Number of solutions: " << count << endl;
    return 0;
}