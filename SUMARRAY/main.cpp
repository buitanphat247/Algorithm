#include <bits/stdc++.h>
using namespace std;
const long long MOD=2018;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.INP", "r", stdin);
    freopen("1.OUT", "w", stdout);
    long long n;
    cin >> n;
    long long dp = 0;
    long long sum = 0;
    for (long long i = 1; i <= n; i++)
    {
        long long tmp = ((i % MOD) * ((i + 1) % MOD)) % MOD;
        dp = (dp + tmp) % MOD;
        sum = (sum + dp) % MOD;
    }
    cout << sum << endl;

    return 0;
}
