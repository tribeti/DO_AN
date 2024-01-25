#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    // Khai báo biến để lưu trữ số gốc và số đảo ngược
    int soGoc, soDaoNguoc = 0;

    // Nhập số gốc từ người dùng
    std::cin >> soGoc;

    // Biến tạm để lưu một bản sao của số gốc
    int temp = soGoc;

    // Vòng lặp để đảo ngược các chữ số của số gốc
    while (temp > 0) {
        // Trích xuất chữ số cuối cùng của số hiện tại
        int chuSo = temp % 10;

        // Xây dựng số đảo ngược bằng cách thêm chữ số hiện tại
        soDaoNguoc = soDaoNguoc * 10 + chuSo;

        // Loại bỏ chữ số cuối cùng khỏi số hiện tại
        temp = temp / 10;
    }

    // Xuất số đảo ngược
    std::cout << "Số Đảo Ngược: " << soDaoNguoc << endl;

    // Xuất số gốc
    std::cout << "Số Gốc: " << soGoc;

    return 0;
}
