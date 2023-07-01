#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000007;

int main() {
    long long n;
    cin >> n;

    long long result = ((n % mod) * (n % mod)) % mod;
    cout << result << endl;

    return 0;
    //https://oj.luyencode.net/problem/TIEPN
}
