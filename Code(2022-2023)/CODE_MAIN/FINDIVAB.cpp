#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a,b;
bool kt(ll s)
{
    ll tmp(0);
    tmp+=s/a;
    tmp+=s/b;
    tmp-=s/(a*b);
    return tmp>=n;
}
void solve()
{
    cin >> n >> a >> b;
    ll lef(0),rig(1e18),res(1e18);
    while (lef<=rig)
    {
        ll tmp=(lef+rig)/2;
        if (kt(tmp))
        {
            rig=tmp-1;
            res=min(res,tmp);
        }
        else lef=tmp+1;
    }
    cout << res;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen ("FINDIVAB.inp","r",stdin);
    freopen ("FINDIVAB.out","w",stdout);
    solve();
    return 0;
}
