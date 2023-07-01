#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long ucln;
    cin >> ucln;
    for (long long i = 2; i <= n; i++) {
        long long a;
        cin >> a;
        ucln = __gcd(ucln, a);
    }
    cout << ucln << endl;
    return 0;
    //https://codeforces.com/gym/347815/problem/6B
}
