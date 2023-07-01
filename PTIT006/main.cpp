#include <iostream>
using namespace std;

const long long MAXN = 50;

int main() {
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    cin >> n;

    long long matrix[MAXN][MAXN];
    long long num = 1; // Giá trị ban đầu của ô đầu tiên
    long long rowStart = 0, rowEnd = n - 1; // Chỉ số hàng bắt đầu và kết thúc
    long long colStart = 0, colEnd = n - 1; // Chỉ số cột bắt đầu và kết thúc

    // Lặp để điền giá trị vào ma trận xoắn ốc
    while (num <= n * n) {
        // Điền giá trị từ trái sang phải trong hàng đầu tiên
        for (long long i = colStart; i <= colEnd; i++) {
            matrix[rowStart][i] = num++;
        }
        rowStart++; // Tăng chỉ số hàng bắt đầu

        // Điền giá trị từ trên xuống dưới trong cột cuối cùng
        for (long long i = rowStart; i <= rowEnd; i++) {
            matrix[i][colEnd] = num++;
        }
        colEnd--; // Giảm chỉ số cột kết thúc

        // Điền giá trị từ phải sang trái trong hàng cuối cùng
        for (long long i = colEnd; i >= colStart; i--) {
            matrix[rowEnd][i] = num++;
        }
        rowEnd--; // Giảm chỉ số hàng kết thúc

        // Điền giá trị từ dưới lên trên trong cột đầu tiên
        for (long long i = rowEnd; i >= rowStart; i--) {
            matrix[i][colStart] = num++;
        }
        colStart++; // Tăng chỉ số cột bắt đầu
    }

    // In ma trận xoắn ốc
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    //https://oj.luyencode.net/problem/PTIT006
    return 0;
}
