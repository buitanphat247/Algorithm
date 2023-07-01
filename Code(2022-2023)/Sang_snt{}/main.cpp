#include<bits/stdc++.h>
using namespace std;
const long long mod=1e7;
long long sum_div(long long n)
{
    long long sum=0,z=n ;
    for(long long i=1; i<=sqrt(n); i++)
        if(n%i==0)
        {
            if(i!=n/i)
                sum+=i+n/i;
            else
                sum+=i;
        }
    return (sum-1-z);
}
int main ()
{

    vector<long long>isprime(mod,1),v;
    for(long long i=2; i<=sqrt(mod); i++)
    {
        if(isprime[i])
            for(long long j=i*i; j<=mod; j+=i)
                isprime[j]=0;
    }
    isprime[1]=isprime[0]=0;
    long long l,r;
    cin>>l>>r;
    for(long long i=l; i<=r; i++)
        if(isprime[i])
            cout<<i<<endl;
}
