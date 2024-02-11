#include <iostream>

using namespace std;
// về cơ bản thì ta di chuyển 2 dĩa trên cùng qua cột B rồi di chuyển dĩa to nhất qua cột C  
//                 3        A               C                 B
void moveTower(int n, char source, char destination, char auxiliary) {
    if (n == 1) {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }   
    moveTower(n - 1, source, auxiliary, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    moveTower(n - 1, auxiliary, destination, source);
    
    // Chạy hàm moveTower(3, 'A', 'C', 'B') ta được :
    // moveTower(2 , A , B , C) (1)
    // cout << 3 A -> C
    // moveTower(2 , B , C , A) (2)

    // (1)
    // moveTower(1 , A , C , B)
    // cout << 2 A -> B
    // moveTower(1 , C , B , A)

    // (2)
    // moveTower(1 , B , A , C)
    // cout << 2 B -> C
    // moveTower(1 , A , C , B)

    // Kết luận
    // 1 : A -> C
    // 2 : A -> B
    // 1 : C -> B
    // 3 : A -> C
    // 1 : B -> A
    // 2 : B -> C
    // 1 : A -> C    
}

int main() {
    int n;
    std::cout << "Enter the number of disks: ";
    std::cin >> n;
    moveTower(n, 'A', 'C', 'B');
    return 0;
}