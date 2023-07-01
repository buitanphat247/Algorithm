#include <bits/stdc++.h>
using namespace std;
long long C(long long n, long long k)
{
  if (k == 0 || k == n)
    return 1;
  else
    return C(n - 1, k - 1) + C(n - 1, k);
}
int main()
{
  ios_base::sync_with_stdio(false);
  freopen("KHIEUVU.inp", "r", stdin);
  freopen("KHIEUVU.out", "w", stdout);
  long long n, d;
  cin >> n >> d;
  long long x[n], res = 0;
  map<long long, long long> mp;
  for (long long i = 0; i < n; i++)
  {
    cin >> x[i];
    mp[x[i]]++;
  }
  vector<long long> v1, v2;
  for (auto it = mp.begin(); it != mp.end(); it++)
    v1.push_back(it->first), v2.push_back(it->second);
  for (long long i = 0; i < v1.size(); i++)
  {
    long long tmp = v1[i] + d;
    long long pos = lower_bound(v1.begin(), v1.begin() + v1.size(), tmp) - v1.begin();
    if (pos >= v1.size())
      break;
    if (v1[pos] - v1[i] == d)
      res += C(v2[i], 1) * C(v2[pos], 1);
  }
  cout << res << endl;
}