#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector <int> A;
int main(int argc, char const *argv[]) {
    int a, b = 0, c, temp = 0;
    int i = 0;
    cin >> a;
    //153
    c = a;
    while (a > 0) {
        // them hang don vi vao vector -> 3
        A.push_back(a % 10);
        // chia cho 10 (153->15)
        temp++;
        a = a / 10;
    }
    // cout << temp << endl;
    for (int i = 0; i < A.size(); i++) {
        // A[0] = 3   pow(3,3) = 27 
        b = b + pow(A[i],temp);
    }    
    // xet dieu kien de kiem tra
    if (b == c) {
        cout << "La so Armstrong";
    }
    else {
        cout << "Khong la so Armstrong";
    }
    return 0;
}
