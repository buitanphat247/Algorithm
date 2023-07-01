#include<bits/stdc++.h>
using namespace std;

const long long MOD =  200000;
bool check(long long n)
{
    if(n<2)
        return false;
    for(long long i=2; i*i<=n; i++)
        if(n%i==0)
            return false;
    return true;
}
int main()
{
    vector<bool> isprime(MOD + 1, true);
    isprime[0] = isprime[1] = false;

    for (long long i = 2; i * i <= MOD; i++)
        if (isprime[i])
            for (long long j = i * i; j <= MOD; j += i)
                isprime[j] = false;

    vector<string> primes,kq;
    for (long long i = 2; i <= MOD; i++)
        if (isprime[i])
            primes.push_back(to_string(i));

    for (long long i = 0; i < primes.size(); i+=2)
        if(check(stoll(primes[i]+primes[i+1])))
            kq.push_back(primes[i]+primes[i+1]);
    long long k;
    cin>>k;
    cout<<kq[k-1]<<endl;
    return 0;
    //https://codeforces.com/gym/347815/problem/5C
}