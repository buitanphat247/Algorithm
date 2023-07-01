#include <bits/stdc++.h>
using namespace std;
int main()
{
  freopen("1.inp", "r", stdin);
  freopen("1.out", "w", stdout);
  long long n;
  cin >> n;
  vector<long long> v(n + 10);
  for (long long i = 1; i <= n; i++)
    cin >> v[i];
  vector<long long> f(n + 10);
  f[0] = 0;
  if (v[1] == 0)
    f[1] = 0;
  else
    f[1] = 1;
  if (v[2] == 0)
    f[2] = 0;
  else if (v[2] != 0)
  {
    if (v[1] == 1)
      f[2] = 2;
    else
      f[2] = 1;
  }
  for (long long i = 3; i <= n; i++)
  {
    if (v[i] == 0)
      f[i] = 0;
    else
      f[i] = f[i - 1] + f[i - 2];
  }
  cout << f[n] << endl;
}