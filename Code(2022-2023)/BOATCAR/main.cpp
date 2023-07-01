#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BOATCAR.INP", "r", stdin);
    freopen("BOATCAR.OUT", "w", stdout);
    long long n, s;
    cin >> n >> s;
    long long v[n], w[n], dp[n + 10][s + 10], dp1[s + 10] = {0};
    memset(dp, 0, sizeof(dp));
    for (long long i = 1; i <= n; i++)
        cin >> w[i] >> v[i];
    for (long long i = 1; i <= n; i++)
    {
        for (long long j = 1; j <= s; j++)
        {
            dp[i][j] = dp[i - 1][j];
            if (j >= w[i])
                dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
        }
    }
    for (long long j = 0; j <= s; j++)
        for (long long i = 1; i <= n; i++)
            if (j >= w[i])
                dp1[j] = max(dp1[j], dp1[j - w[i]] + v[i]);
    cout << dp[n][s] << endl;
    cout << dp1[s] << endl;
    cout << abs(dp1[s] * 5 - dp[n][s] * 5) << endl;
}
