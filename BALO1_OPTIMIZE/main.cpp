#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,m;
    cin >> n >> m;
    vector<long long> h(n + 1), s(n + 1);
    for (long long i = 1; i <= n; i++)
        cin >> h[i];
    for (long long i = 1; i <= n; i++)
        cin >> s[i];
    vector<long long>dp(m+10,0);
    for(long long i=1;i<=n;i++)
        for(long long j=m;j>=h[i];j--)
            dp[j]=max(dp[j],dp[j-h[i]]+s[i]);
    cout<<dp[m]<<endl;
}
