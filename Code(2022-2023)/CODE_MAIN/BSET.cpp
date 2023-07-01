#include <bits/stdc++.h>
#define N 100000
using namespace std;

int main() {
    freopen("#include <iostream>
#define N 100000
using namespace std;

int main() {
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    int* A = new int[n];
    int* B = new int[m];
    int countA[N * 2 + 1] = {0};  // Mảng đếm số lần xuất hiện của các phần tử trong mảng A
    int countB[N * 2 + 1] = {0};  // Mảng đếm số lần xuất hiện của các phần tử trong mảng B

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        countA[A[i] + N]++;
    }

    for (int i = 0; i < m; i++) {
        cin >> B[i];
        countB[B[i] + N]++;
    }

    // Tìm hợp giữa hai mảng
    int hop = 0;
    for (int i = 0; i <= 2 * N; i++) {
        if (countA[i] > 0 || countB[i] > 0) {
            hop++;
        }
    }
    cout << "Hop: " << hop << endl;

    // Tìm giao giữa hai mảng
    int giao = 0;
    for (int i = 0; i <= 2 * N; i++) {
        if (countA[i] > 0 && countB[i] > 0) {
            giao++;
        }
    }
    cout << "Giao: " << giao << endl;

    delete[] A;
    delete[] B;

    return 0;
}
.inp", "r", stdin);
    freopen("BSET.out", "w", stdout);

    int n, m;
    cin >> n >> m;

    int* A = new int[n];
    int* B = new int[m];
    int countA[N * 2 + 1] = {0};  // Mảng đếm số lần xuất hiện của các phần tử trong mảng A
    int countB[N * 2 + 1] = {0};  // Mảng đếm số lần xuất hiện của các phần tử trong mảng B

    for (int i = 0; i < n; i++) {
        cin >> A[i];
        countA[A[i] + N]++;
    }

    for (int i = 0; i < m; i++) {
        cin >> B[i];
        countB[B[i] + N]++;
    }

    // Tìm hợp giữa hai mảng
    int hop = 0;
    for (int i = 0; i <= 2 * N; i++) {
        if (countA[i] > 0 || countB[i] > 0) {
            hop++;
        }
    }
    cout << "Hop: " << hop << endl;

    // Tìm giao giữa hai mảng
    int giao = 0;
    for (int i = 0; i <= 2 * N; i++) {
        if (countA[i] > 0 && countB[i] > 0) {
            giao++;
        }
    }
    cout << "Giao: " << giao << endl;

    delete[] A;
    delete[] B;

    return 0;
}
