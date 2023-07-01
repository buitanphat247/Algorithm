#include <bits/stdc++.h>
using namespace std;
bool nt(long long n)
{
  for (long long i = 2; i <= sqrt(n); i++)
    if (n % i == 0)
      return false;
  return true;
}
bool SHH(long long n)
{
  for (long long i = 1; i <= 32; i++)
  {
    if (nt(i))
    {
      long long tmp = (long long)pow(2, i) - 1;
      if (nt(tmp))
      {
        long long hh = 1ll * tmp * (long long)pow(2, i - 1);
        if (hh == n)
          return true;
      }
    }
  }
  return false;
}
int main()
{
  int n;
  cin >> n;
  if (SHH(n))
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
}
