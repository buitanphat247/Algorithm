#include<bits/stdc++.h>
using namespace std;
const long long mod=1e6+99;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    cin>>n;
    vector<long long>isprime(mod,true),prime;
    for(long long i=2; i*i<=mod; i++)
        if(isprime[i])
            for(long long j=i*i; j<=mod; j+=i)
                isprime[j]=false;
    for(long long i=2; i<=mod; i++)
        if(isprime[i])
            prime.push_back(i);
    for(auto it:prime)
        if(it>n)
        {
            cout<<it<<endl;
            return 0;
        }
}
