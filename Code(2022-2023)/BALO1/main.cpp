#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long n,s;
    cin>>n>>s;
    long long v[n],w[n],dp[n+1][s+1];
    memset(dp, 0, sizeof(dp));
    for(long long i=1; i<=n; i++)
        cin>>w[i]>>v[i];
    for(long long i=1; i<=n; i++)
    {
        for(long long j=1; j<=s; j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=w[i])
                dp[i][j]=max(dp[i][j],dp[i-1][j-w[i]]+v[i]);
        }
    }
    cout<<dp[n][s]<<endl;
}
