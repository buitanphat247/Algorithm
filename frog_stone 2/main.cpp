#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int main()
{
    //https://lqdoj.edu.vn/problem/stonefrog2
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n,k;
    cin>>n>>k;
    long long h[n+1];
    for(long long i=0; i<n; i++)
        cin>>h[i];
    long long dp[n+1]= {0};
    dp[0]=0;
    for(long long i=1; i<n; i++)
    {
        dp[i]=dp[i-1]+abs(h[i]-h[i-1]);
        for(long long j=i-2; j>=max(0LL,i-k); j--)
            dp[i]=min(dp[i],dp[j]+abs(h[i]-h[j]));
    }
    cout<<dp[n-1]<<endl;

    return 0;
}
