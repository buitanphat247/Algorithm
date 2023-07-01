#include<bits/stdc++.h>
using namespace std;

struct Time {
    long long s, e;
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n, kq = 1;
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
        return 0;
    }
    Time x[n];
    for (long long i = 0; i < n; i++)
        cin >> x[i].s >> x[i].e;
    sort(x, x + n, [](const Time& a, const Time& b) {
        return a.e < b.e;
    });
    long long curr = x[0].e;
    for (long long i = 1; i < n; i++) {
        if (x[i].s >= curr) {
            curr = x[i].e;
            kq++;
        }
    }
    cout << kq << endl;
    return 0;
}
//https://lqdoj.edu.vn/problem/cses1629
