#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n = 0;
  cin >> n;
  vector<long long> v(n + 1);
  for (long long i = 0; i < n; i++)
    cin >> v[i];
  // dãy con tăng dài nhất
  vector<long long> dp(n + 5, 1);
  for (long long i = 0; i < n; i++)
    for (long long j = 0; j < i; j++)
      if (v[i] > v[j])
        dp[i] = max(dp[i], dp[j] + 1);
  cout << *max_element(dp.begin(), dp.end()) << endl;

  // dãy con giảm dài nhất
  vector<long long> f(n + 5, 1);
  for (long long i = 0; i < n; i++)
    for (long long j = 0; j < i; j++)
      if (v[i] < v[j])
        f[i] = max(f[i], f[j] + 1);
  cout << *max_element(f.begin(), f.end()) << endl;
}