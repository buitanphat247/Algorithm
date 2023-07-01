#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("GIFT.INP", "r", stdin);
    freopen("GIFT.OUT", "w", stdout);
    long long n, k,dp_max=1;
    cin>>n>>k;
    long long x[n + 1],dp[n + 1];
    for (int i = 1; i <= n; i++)
        cin>>x[i];
    fill(dp,dp+n+1,1);
    for(long long i=1; i<=n; i++)
        for(long long j=i+1; j<=n; j++)
            if(x[j]>=x[i]+k)
                dp[j]=max(dp[j],dp[i]+1),dp_max=max(dp[i],dp[j]);
    cout<<dp_max<<endl;
    delete[] x;
    delete[] dp;
    return 0;
}
