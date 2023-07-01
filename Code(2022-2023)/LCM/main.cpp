#include<bits/stdc++.h>
using namespace std;
#define ll long long

long double C(long double n, long double k)
{
    vector<long double> dp(k+1, 0);
    dp[0] = 1;
    for (long double i = 1; i <= n; i++)
        for (long double j = min(i, k); j > 0; j--)
            dp[j] = dp[j] + dp[j-1];
    return dp[k];
}

int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long double n, k;
    cin >> k>>n;
    cout<<fixed<<setprecision(1)<< C(n, k) << endl;
    return 0;
}
