#include<bits/stdc++.h>
using namespace std;
const long long MOD=1e6+999999;
int main()
{
    vector<long long> isprime(MOD,1),dp(MOD,1);
    isprime[1]=isprime[0]=false;
    for(long long i=2;i*i<=MOD;i++)
        if(isprime[i])
            for(long long j=i*i;j<=MOD;j+=i)
                isprime[j]=false;
    long long n,k,cnt=0;
    cin>>n>>k;
    for(long long i=0;i<=n;i++)
    {
        long long tmp=i+k;
        if(isprime[tmp]==true&&isprime[i]==true&&tmp<=n)
            cnt++;
    }
    cout<<cnt<<endl;
    //https://codeforces.com/gym/347815/problem/5B
}
