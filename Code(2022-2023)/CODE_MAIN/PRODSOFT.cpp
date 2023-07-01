#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ll n,kq=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("PRODSOFT.INP","r",stdin);
    freopen("PRODSOFT.OUT","w",stdout);
    cin>>n;
    ll a[n],i,maxa=-1;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        maxa=max(abs(a[i]),maxa);
    }
    long long d[maxa],j[maxa];
    for(i=1; i<=maxa; i++)
    {
        d[i]=0;
        j[i]=0;
    }
    for(i=1; i<=n; i++)
    {
        if(a[i]>0)
            d[a[i]]=1;
        if(a[i]<0)
            j[abs(a[i])]=1;
    }
    for(i=1; i<=maxa; i++)
        kq=kq+d[i]+j[i];
    if(kq==n)
        cout << 0;
    else
        cout << kq;
    return 0;
}
