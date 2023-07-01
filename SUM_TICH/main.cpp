#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9+7;

int main()
{
    int n;
    cin >> n;
    vector<long long> a(n+1);
    long long sum = 0, sum_sq = 0;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        sum += a[i];
        sum_sq += a[i]*a[i];
    }
    long long ans = ((sum*sum)%mod - sum_sq%mod + mod) % mod * 500000004 % mod;
    cout<<ans<<endl;
    return 0;
}
