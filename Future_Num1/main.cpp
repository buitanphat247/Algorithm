#include<bits/stdc++.h>
using namespace std;
const long long mod=1e6;
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
    for(long long i=2; i<=mod; i++)
        if(isprime[i])
            v.push_back(i);
    long long n,cnt=0;
    cin>>n;

    for(long long i=0; i<n; i++)
    {
        long long tmp;
        cin>>tmp;
        if(binary_search(v.begin(),v.end(),tmp))
            cnt++;
    }
    cout<<cnt<<endl;
}
