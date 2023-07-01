#include<bits/stdc++.h>
using namespace std;
const long long mod = 3e6;
int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    vector<long long> isprime(mod + 1, true);
    isprime[0]=isprime[1]=false;
    for (long long i = 2; i * i <= mod; i++)
    {
        if (isprime[i])
        {
            for (long long j = i * i; j <= mod; j += i)
            {
                isprime[j] = false;
            }
        }
    }

    long long n, num_min = 1e9, num_max = -1e9;
    cin >> n;
    vector<long long> x(n);
    vector<bool> dp(mod + 1, false);
    for (long long i = 0; i < n; i++)
    {
        cin >> x[i];
        num_min = min(num_min, x[i]);
        num_max = max(num_max, x[i]);
        dp[x[i]] = true;
    }

    for (long long i = num_min; i <= num_max; i++)
    {
        if (!dp[i] && isprime[i])
        {
            cout << i << endl;
            return 0;
        }
    }
    cout<<"No prime number missing!"<<endl;
    //https://vinhdinhcoder.net/Problem/Details/4625
    return 0;
}
