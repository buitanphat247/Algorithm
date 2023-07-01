#include <bits/stdc++.h>
using namespace std;
struct gps
{
  long long x, y;
};
bool compare(const gps &a, const gps &b)
{
  return a.x < b.x;
}
int main()
{
  freopen("LINE.inp", "r", stdin);
  freopen("LINE.out", "w", stdout);
  long long n, max_y = -1e9, res = -1e9, min_x = 1e9;
  cin >> n;
  vector<gps> v(n);
  for (long long i = 0; i < n; i++)
    cin >> v[i].x >> v[i].y;
  sort(v.begin(), v.end(), compare);
  vector<long long> dp(n + 1, 1);
  for (long long i = 0; i < n; i++)
  {
    for (long long j = 0; j < i; j++)
      if (v[j].y >= v[i].x)
        dp[i] = max(dp[i], dp[j] + 1);
    if (dp[i] > res)
    {
      res = dp[i];
      max_y = max(v[i].y, max_y);
      min_x = min(v[i].x, min_x);
    }
  }
  cout << "(" << min_x << "," << max_y << ")" << endl;
}