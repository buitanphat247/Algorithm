#include<bits/stdc++.h>
using namespace std;
const long long MOD = 1e6;
int main()
{
    long long n, k;
    long long dp[MOD] = {0};
    cin >> n >> k;
    long long ci, xi, num_max = -1;
    for(long long i = 1; i <= n; i++)
    {
        cin >> ci >> xi;
        dp[xi] = ci;
        num_max = max(num_max, xi);
    }
    long long z = 2 * k + 1, sum = 0, check = -1;
    for(long long i = 1; i <= z; i++)
        sum += dp[i];
    check = max(sum, check);
    for(long long i = z; i <= num_max-1; i++)
    {
        sum += dp[i + 1] - dp[i - z+1];
        check = max(sum, check);
    }
    cout << check << endl;
}
