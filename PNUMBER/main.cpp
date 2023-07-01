#include<bits/stdc++.h>
using namespace std;
const long long MOD=1e7+999;
int main()
{
    vector<long long> isprime(MOD,1),v;
    isprime[1]=isprime[0]=false;
    for(long long i=2;i*i<=MOD;i++)
        if(isprime[i])
            for(long long j=i*i;j<=MOD;j+=i)
                isprime[j]=false;
    for(long long i=2;i<=MOD;i++)
        if(isprime[i])
            v.push_back(i);
    long long a,b;
    cin>>a>>b;
    long long s=lower_bound(v.begin(),v.begin()+v.size(),a)-v.begin();
    long long e=upper_bound(v.begin(),v.begin()+v.size(),b)-v.begin();
    for(long long i=s;i<e;i++)
        cout<<v[i]<<endl;
        //https://codeforces.com/gym/347815/problem/5A
}
