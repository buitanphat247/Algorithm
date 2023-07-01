#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e5;
int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n, m;
    cin >> n >> m;
    long long a[n + 1], b[m + 1];
    vector<long long> dp(mod, 1e9);
    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
        dp[a[i]] = min(i, dp[a[i]]);
    }
    for (long long i = 1; i <= m; i++)
    {
        cin >> b[i];
        if (dp[b[i]] != 1e9)
            cout << dp[b[i]] << " ";
        else
            cout << 0 << " ";
    }
}
//https://oj.luyencode.net/problem/SEARCH3
