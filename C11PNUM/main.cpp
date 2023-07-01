#include<bits/stdc++.h>
using namespace std;

const long long MOD = 3e6;

int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    vector<long long> primes;
    vector<bool> isPrime(MOD + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (long long i = 2; i <= sqrt(MOD); i++)
        if (isPrime[i])
            for (long long j = i * i; j <= MOD; j += i)
                isPrime[j] = false;
    for (long long i = 0; i <= MOD; i++)
        if (isPrime[i])
            primes.push_back(i);
    long long T;
    cin >> T;
    while (T--)
    {
        long long N, K;
        cin >> N >> K;
        long long tmp = 1, num_max = -1;
        for (long long i = 0; i < K; i++)
            tmp *= primes[i];
        if(tmp<=N)
            num_max=max(tmp,num_max);
        for (long long i = K; i < primes.size(); i++)
        {
            tmp = (tmp /primes[i - K] )*primes[i] ;
            if(tmp>N)
                break;
            else
                num_max=max(tmp,num_max);
        }

        cout << num_max << endl;
    }

    return 0;
}
