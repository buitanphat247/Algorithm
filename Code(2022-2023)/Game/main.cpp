#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("GAME.INP", "r", stdin);
    freopen("GAME.OUT", "w", stdout);
    long long n,k;
    cin>>n>>k;
    long long x[n+100],dp[n+100];
    for(long long i=1; i<=n; i++)
        cin>>x[i];
    dp[1]=0,    dp[2]=abs(x[2]-x[1]);
    for(long long i=3; i<=n; i++)
    {
        dp[i]=1e9;
        for(long long j=(i-k); j<=i; j++)
            dp[i]=min(dp[j]+abs(x[i]-x[j]),dp[i]);
    }
    cout<<dp[n]<<endl;
    return 0;
}
