#include <bits/stdc++.h>
using namespace std;
int main()
{
  freopen("1.inp", "r", stdin);
  freopen("1.out", "w", stdout);
  long long n, s;
  cin >> n >> s;
  long long v[n], w[n];
  for (long long i = 1; i <= n; i++)
    cin >> w[i] >> v[i];
  // balo 1
  long long dp[n + 5][s + 5];
  memset(dp, 0, sizeof(dp));
  for (long long i = 1; i <= n; i++)
  {
    for (long long j = 1; j <= s; j++)
    {
      dp[i][j] = dp[i - 1][j];
      if (j >= w[i])
        dp[i][j] = max(dp[i][j], dp[i - 1][j - w[i]] + v[i]);
    }
  }
  cout << dp[n][s] << endl;

  // balo 2
  long long f[s + 5];
  memset(f, 0, sizeof(f));
  for (long long j = 0; j <= s; j++)
  {
    for (long long i = 1; i <= n; i++)
    {
      if (j >= w[i])
        f[j] = max(f[j], f[j - w[i]] + v[i]);
    }
  }
  cout << f[s] << endl;
}