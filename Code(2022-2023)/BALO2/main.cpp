#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long s,n;
    cin>>n>>s;
    long long v[n],w[n];
    for(long long i=0; i<n; i++)
        cin>>w[i]>>v[i];
    long long dp[s + 10];
    memset(dp, 0, sizeof(dp));
    for (long long j = 0; j <= s; j++)
        for (long long i = 1; i <= n; i++)
            if (j >= w[i])
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    cout << dp[s] << endl;
}
