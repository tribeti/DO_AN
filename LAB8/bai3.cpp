#include <iostream>

using namespace std;

#define MAX_VERTICES 100  // Số đỉnh tối đa trong đồ thị
#define INF 999999999     // Giá trị đại diện cho vô cùng

int n;  // Số đỉnh của đồ thị
int adj[MAX_VERTICES][MAX_VERTICES];  // Ma trận kề
bool visited[MAX_VERTICES];  // Đánh dấu đỉnh đã được thăm
int dist[MAX_VERTICES];  // Lưu khoảng cách ngắn nhất từ đỉnh nguồn

void dijkstra(int src) {
    // Khởi tạo giá trị ban đầu
    for (int i = 0; i < n; i++) {
        dist[i] = INF;  // Gán khoảng cách ban đầu là vô cùng
        visited[i] = false;  // Chưa thăm đỉnh nào
    }
    dist[src] = 0;  // Khoảng cách từ đỉnh nguồn tới chính nó là 0

    for (int count = 0; count < n; count++) {
        // Tìm đỉnh có khoảng cách nhỏ nhất từ đỉnh nguồn và chưa được thăm
        int u = -1;
        for (int v = 0; v < n; v++) {
            if (!visited[v] && (u == -1 || dist[v] < dist[u])) {
                u = v;
            }
        }

        // Nếu không còn đỉnh nào chưa được thăm, thoát khỏi vòng lặp
        if (u == -1) {
            break;
        }

        // Đánh dấu đỉnh u đã được thăm
        visited[u] = true;

        // Cập nhật khoảng cách tới các đỉnh kề với u nếu có đường đi ngắn hơn
        for (int v = 0; v < n; v++) {
            if (adj[u][v] && dist[u] != INF && dist[u] + adj[u][v] < dist[v]) {
                dist[v] = dist[u] + adj[u][v];
            }
        }
    }
}

int main() {
    cout << "Nhap so dinh cua do thi: ";
    cin >> n;

    cout << "Nhap ma tran ke: \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> adj[i][j];
        }
    }

    int src;
    cout << "Nhap dinh nguon: ";
    cin >> src;

    dijkstra(src);

    cout << "Khoang cach ngan nhat tu dinh nguon den cac dinh khac: \n";
    for (int i = 0; i < n; i++) {
        cout << "Dinh " << i << ": " << dist[i] << endl;
    }
    return 0;
}

/* cách sử dụng code :
        3    
    0-------1               Ta có 0 <-> 1 : 3
    |     / |                     0 <-> 3 : 2
    |  6 /  |                     1 <-> 3 : 6
  2 |   /   |5                    1 <-> 2 : 5
    |  /    |                     2 <-> 3 : 4
    | /     |                     
    3-------2               Vì vậy nên ma trận kề sẽ là
        4                         0       1       2       3
                            0     0       3       0       2
                            1     3       0       5       6
                            2     0       5       0       4
                            3     2       6       4       0          
*/