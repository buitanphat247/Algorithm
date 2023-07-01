#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q,i,ans=1,res=0;
    cin >> n >> q;
    for(i=1; i<=n; i++)
    {
        res =(res+(ans%2023))%2023;
        ans = ((ans * q)%2023)%2023;
    }
    cout << res << endl;
    return 0;
}
