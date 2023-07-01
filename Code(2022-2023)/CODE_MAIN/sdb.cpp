#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define Input(n) freopen(n".inp", "r", stdin), freopen(n".out", "w", stdout)
#define ll long long
const int N = 1e6 + 5;
using namespace std;

ll n;
ll a[N], cnt[N];
void solve()
{
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    vector <ll> res;

    for(ll i = 0; i < n; i++)
    {
        if(cnt[a[i]] == 1)
        {
            res.push_back(a[i]);
        }
    }
    cout << res.size() << endl;
    for(ll i = 0; i < res.size(); i++)
        cout << res[i] << endl;
}
int main()
{
    fast();
    Input("sdb");
    cin >> n;
    solve();
    return 0;
}
