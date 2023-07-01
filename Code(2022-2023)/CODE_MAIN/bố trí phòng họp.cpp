#include <bits/stdc++.h>
using namespace std;
struct phong_may
{
  long long start, end;
};
bool cmp(const phong_may &a, const phong_may &b)
{
  return a.end < b.end;
}
int main()
{
  freopen("1.inp", "r", stdin);
  freopen("1.out", "w", stdout);
  long long n;
  cin >> n;
  vector<phong_may> x(n);
  for (long long i = 0; i < n; i++)
    cin >> x[i].start >> x[i].end;
  sort(x.begin(), x.end(), cmp);
  vector<long long> dp(n + 10, 1);
  for (long long i = 0; i < n; i++)
  {
    for (long long j = 0; j < i; j++)
    {
      if (x[i].start >= x[j].end)
        dp[i] = max(dp[i], dp[j] + 1);
    }
  }
  cout << *max_element(dp.begin(), dp.end()) << endl;
}
