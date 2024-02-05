#include <iostream>

using namespace std;
double gt (int n) {
    if  (n == 1) {
        return 1;
    }
    else {
        //5 * gt(4)
        //gt(4) = 4 * gt(3)
        //gt(3) = 3 * gt(2)
        //gt(2) = 2 * gt(1) = 2 * 1
        return n * gt(n-1);
    }
}
int main(int argc, char const *argv[]) { 
    int n;
    cout << "Nhap so nguyen : ";
    // vd nhap n = 5
    cin >> n;
    cout << gt(n);
    return 0;
}
