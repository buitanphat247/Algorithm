#include<bits/stdc++.h>
using namespace std;
long long n, s, max_sum=-1e9;
vector<long long> dp;
void solve(int i, long long sum)
{
    if (i == n)
    {
        max_sum = max(sum, max_sum);
        return;
    }
    if (sum + dp[i] <= s)
        solve(i + 1, sum + dp[i]);
    solve(i + 1, sum);
}

int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);

    cin >> n >> s;
    dp.resize(n);
    for (int i = 0; i < n; i++)
        cin >> dp[i];
    solve(0, 0);
    cout << max_sum << endl;
    return 0;
}
//https://oj.luyencode.net/problem/PACKING
