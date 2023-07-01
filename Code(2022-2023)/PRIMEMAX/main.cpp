#include <bits/stdc++.h>
#define ll long long
using namespace std;
const long long mod=1e7+99;
bool pr[mod];
bool sang(ll n)
{
    pr[0] = pr[1] = false;
    fill(pr+2,pr+2+mod,true);
    for(ll j = 2; j * j <= mod; j++)
    {
        if(pr[j] == true)
        {
            for(ll i = j * 2; i <= mod ; i += j)
                pr[i] = false;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    ll n;
    cin >> n;
    sang(n);
    for(ll i =n-1; i >= 1; i--)
    {
        ll tmp = n / i;
        if (pr[i] && pr[tmp] && tmp != i && tmp * i <= n)
        {
            cout << tmp << " " << i << endl;
            break;
        }
    }
    return 0;
}
