#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
const long long mod = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n, m;
    cin >> n >> m;
    long long w[n + 1], v[n + 1];
    for (long long i = 1; i <= n; i++)
        cin >> w[i] >> v[i];
    long long dp[m + 1] = {0};
    for(long long j=0;j<=m;j++)
        for(long long i=1;i<=n;i++)
            if(j>=w[i])
                dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
    cout<<dp[m]<<endl;
    return 0;
}
