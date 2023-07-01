#include<bits/stdc++.h>
using namespace std;

int main(void)
{

    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n, s;
    cin >> n >> s;
    vector<long long> v(n + 1), w(n + 1);
    vector<long long> dp(s + 1, 0);
    for(long long i = 1; i <= n; i++)
        cin >> w[i] >> v[i];

    for(long long i = 1; i <= n; i++)
        for(long long j = s; j >= w[i]; j--)
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);

    cout << dp[s] << endl;

    return 0;
}
//https://oj.luyencode.net/problem/CAYKHE
