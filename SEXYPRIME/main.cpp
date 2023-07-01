#include<bits/stdc++.h>
using namespace std;
const long long mod=1e6;
struct p
{
    long long f,l;
};
int  main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    vector<long long> primes,isprime(mod,true);
    for(long long i=2; i*i<=mod; i++)
        if(isprime[i])
            for(long long j=i*i; j<=mod; j+=i)
                isprime[j]=false;
    for(long long i=2; i<=mod; i++)
        if(isprime[i])
            primes.push_back(i);
    long long j=0;
    vector<p>v(100000);
    for(long long i=0; i<primes.size(); i++)
    {
        long long tmp=primes[i]+6;
        if(binary_search(primes.begin(),primes.end(),tmp)==true)
            v[j].f=primes[i], v[j].l=tmp,j++;
    }
    long long t;
    cin>>t;
    while(t--)
    {
        long long a;
        cin>>a;
        cout<< v[a-1].f<< " "<< v[a-1].l<<endl;
    }
    return 0;
    //https://vinhdinhcoder.net/Problem/Details/4610
}
