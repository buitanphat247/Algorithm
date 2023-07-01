#include<bits/stdc++.h>
#define ld long double
#define ll long long
#define fast() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define input(n) freopen(n".inp", "r", stdin), freopen(n".out", "w", stdout)
using namespace std;
ld n;
ld a[10005];
void solve()
{
    ld res = 0;
    for(ll i = 0; i < n-1; i++)
        res += (a[i] + a[i+1])*0.05;
    cout << fixed << setprecision(2) << res;
}
int main()
{
    fast();
    input("sum");
    cin >> n;
    for(ll i = 0; i < n; i++)
        cin >> a[i];
    solve();
    return 0;
}
