#include <iostream>
#include <vector>
using namespace std;
const long long MOD = 1e9 + 7;
vector<vector<long long>> multiplyMatrix(const vector<vector<long long>>& A, const vector<vector<long long>>& B) {
    long long n = A.size();
    long long m = B[0].size();
    long long p = B.size();
    vector<vector<long long>> C(n, vector<long long>(m, 0));

    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < m; j++) {
            for (long long k = 0; k < p; k++) {
                C[i][j] = (C[i][j] + (A[i][k] * B[k][j]) % MOD) % MOD;
            }
        }
    }

    return C;
}

vector<vector<long long>> powerMatrix(const vector<vector<long long>>& A, long long k) {
    if (k == 1) {
        return A;
    } else if (k % 2 == 0) {
        vector<vector<long long>> X = powerMatrix(A, k / 2);
        return multiplyMatrix(X, X);
    } else {
        vector<vector<long long>> X = powerMatrix(A, k / 2);
        return multiplyMatrix(multiplyMatrix(X, X), A);
    }
}

long long fibonacci(long long n) {
    if (n <= 1) {
        return n;
    }

    vector<vector<long long>> A = {{1, 1}, {1, 0}};
    vector<vector<long long>> result = powerMatrix(A, n - 1);

    return result[0][0];
}

int main() {
    long long n;
    cin >> n;

    long long fib = fibonacci(n);
    cout << fib << endl;

    return 0;
    //https://lqdoj.edu.vn/problem/cses1722
}
