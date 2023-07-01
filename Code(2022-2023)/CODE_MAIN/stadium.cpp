#include <bits/stdc++.h>
using namespace std;
struct stadium
{
  long long t1, t2, cs;
};
bool cmp(const stadium &a, const stadium &b)
{
  return a.t2 < b.t2;
}
int main()
{
  freopen("1.inp", "r", stdin);
  freopen("1.out", "w", stdout);
  long long n;
  cin >> n;
  vector<stadium> x(n);
  for (long long i = 0; i < n; i++)
    cin >> x[i].t1 >> x[i].t2 >> x[i].cs;
  vector<long long> dp(n + 10, 0);
  sort(x.begin(), x.end(), cmp);
  for (long long i = 0; i < n; i++)
  {
    dp[i] = x[i].cs;
    for (long long j = 0; j < i; j++)
    {
      if (x[i].t1 >= x[j].t2)
        dp[i] = max(dp[i], dp[j] + x[i].cs);
    }
  }
  cout << *max_element(dp.begin(), dp.end()) << endl;
}
