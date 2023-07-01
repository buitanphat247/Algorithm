#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("RABBWOLV.INP","r",stdin);
    freopen("RABBWOLV.OUT","w",stdout);
    ll n, d = 0, i,kq=-1e9;
    cin >> n;
    vector<ll> a(n);
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
        {
            d++;
            kq=max(kq,d);
        }
        else
            d=0;
    }
    cout << kq << endl;
    return 0;
}
