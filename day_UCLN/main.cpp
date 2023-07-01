#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t,n;
    cin >> t;
    while (t--)
    {
        cin >> n;
    ll a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    ll x[n+1];
    x[0]=a[0];
    for(int i=1; i<=n; i++)
        x[i]=a[i]*a[i-1]/__gcd(a[i],a[i-1]);
    x[n] = a[n-1];
    for (auto it : x)
    cout << it << " ";
    }
    return 0;
}
