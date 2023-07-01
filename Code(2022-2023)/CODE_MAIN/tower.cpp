#include <bits/stdc++.h>
using namespace std;
int n,res, f[503], r[100005], h[100005];
int main()
{
    freopen("tower.inp","r",stdin);
    freopen("tower.out","w",stdout);
    cin>>n;
    for(int i=1; i<=n; i++)
      cin>>r[i]>>h[i];
    int rmax=0;
    for(int i=1; i<=n; i++)
      rmax = max(rmax,r[i]);
    // khoi tao mang f
    for(int i=1; i<= rmax; i++)
      f[i]=0;
    f[r[1]]=h[1];
    res=f[r[1]];
    for(int i=2; i<=n; i++)
    {
      for(int j=r[i]; j<=rmax ; j++)
        f[r[i]] = max(f[r[i]],f[j]+h[i]);
      res = max(res,f[r[i]]);
    }
    cout<<res;
    return 0;

}