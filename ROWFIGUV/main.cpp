#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    cin>>n;
    vector<long long>v(n+1),dp(n+1,1);
    for(long long i=1;i<=n;i++)
        cin>>v[i];
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<i;j++)
            if(v[i]<v[j])
                dp[i]=max(dp[i],dp[j]+1);
    for(long long i=1;i<=n;i++)
        for(long long j=1;j<i;j++)
            if(v[i]>v[j])
                dp[i]=max(dp[i],dp[j]+1);
    cout<<dp[n]<<endl;
}
