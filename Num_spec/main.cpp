#include<bits/stdc++.h>
using namespace std;
const long long mod=1e5;
bool check_ODD(long long n)
{
    string s=to_string(n);
    long long sum=0;
    for(long long i=0;i<s.size();i++)
    {
        if((char)s[i]=='0')
            return false;
        sum+=s[i]-'0';
    }
    if(sum%2==0)
        return true;
    else
        return false;
}
int main()
{
    vector<long long>isprime(mod,1),v;
    isprime[0]=isprime[1]=false;
    for(long long i=2; i<=sqrt(mod); i++)
        if(isprime[i])
            for(long long j=i*i; j<=mod; j+=i)
                isprime[j]=0;
    for(long long i=2;i<=mod;i++)
        if(isprime[i]&&check_ODD(i))
            v.push_back(i);
    long long l,r;
    cin>>l>>r;
    long long pos1=upper_bound(v.begin(),v.begin()+v.size(),l)-v.begin()-1;
    long long pos2=upper_bound(v.begin(),v.begin()+v.size(),r)-v.begin();
    for(long long i=pos1;i<=pos2;i++)
    {
       if(v[i]>=l&&v[i]<=r)
            cout<<v[i]<<" ";
    }
}
