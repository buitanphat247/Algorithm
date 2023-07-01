#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("SEGMDIVK.INP","r",stdin);
    freopen("SEGMDIVK.OUT","w",stdout);
    ll n,k,kq(0);
    cin >> n >> k;
    ll f[n+1];
    f[0]=0;
    for(ll i=1; i<=n; i++)
    {
        ll a;
        cin >> a;
        f[i]=f[i-1]+a;
         for(ll j=0; j<=i; j++)
            if(((f[j]%k)-(f[i-1]%k))%k==0)
                kq++;
    }
    cout<<kq;
    return 0;
}
