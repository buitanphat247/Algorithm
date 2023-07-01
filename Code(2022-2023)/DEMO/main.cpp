#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string s1, s2;
    cin >> s1;
    cin >> s2;
    long long n = s1.size(), m = s2.size();
    long long dp[n+10][m+10];
    for (long long i = 0; i <= n; i++)
    {
        for (long long j = 0; j <= m; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
            else
            {
                if (s1[i] == s2[j])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
            }
        }
    }
    cout << dp[s1.size()][s2.size()] << endl;
    return 0;
}
