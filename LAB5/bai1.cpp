# include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
    // mảng tĩnh
    int A[5] = {0, 1, 2, 3, 4};
    for (int i = 0; i < 5; i++) {
        cout << A[i] << " ";
    }
    // mảng động
    int n;
    int B[n];
    cout << "\nN = ";
    cin >> n;
    cin.ignore();
    cin.clear();
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }
    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
    return 0;
}