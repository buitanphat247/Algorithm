#include <bits/stdc++.h>
using namespace std;
int main()
{
  freopen("1.inp", "r", stdin);
  freopen("1.out", "w", stdout);
  long long n;
  cin >> n;
  vector<long long> v(n);
  for (long long i = 0; i < n; i++)
    cin >> v[i];
  long long l = 0, r = n - 1, kq = 1e9;
  sort(v.begin(), v.end());
  while (l != r)
  {
    long long sum = v[l] + v[r];
    kq = min(abs(sum), kq);
    if (sum < 0)
      l++;
    else
      r--;
  }
  cout << kq << endl;
}