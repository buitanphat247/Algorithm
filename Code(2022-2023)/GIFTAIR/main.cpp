#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.INP", "r", stdin);
    freopen("1.OUT", "w", stdout);
    ll n;
    cin >> n;
    ll a[n+1];
    ll f[n+1];
    for (ll i=1; i<=n; i++)
        cin >> a[i];
    f[1]=a[1];
    f[2]=a[2];
    f[3]=a[1]+a[3];
    for (ll i=4; i<=n; i++)
    {
        f[i]=max(f[i-3]+a[i],f[i-2]+a[i]);
    }
    cout << max(f[n],f[n-1]) << endl;
    return 0;
}
