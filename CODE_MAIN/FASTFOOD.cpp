#include <bits/stdc++.h>

using namespace std;
#define ll long long
ll n,i;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("FASTFOOD.inp","r",stdin);
    freopen("FASTFOOD.out","w",stdout);
    cin>>n; ll a[n+5],b[n+5],d[n+5],s[n+5];
    for(i=1;i<=n;i++)
        cin>>a[i];
    for(i=1;i<=n;i++)
        cin>>b[i];
    d[0]=0; s[0]=0;
    for(i=1;i<=n;i++)
    {
        s[i]=s[i-1]+a[i];
        d[i]=max(s[i-1]+b[i],max(s[i],d[i-1]+b[i]));
    }
    cout<<d[n];
    return 0;
}
