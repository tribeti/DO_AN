#include <iostream>

using namespace std;

double gt (int n) {
    if  (n == 0) {
        return 1;
    }
    else {
        return n * gt(n-1);
    }
    
    
}
int main(int argc, char const *argv[]) { 
    cout << gt(3);
    return 0;
}
