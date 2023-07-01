#include <bits/stdc++.h>
using namespace std;
const long long mod=1e6+999;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,num_max=-1e9;
    cin>>n;
    long long s[n],t[n],dp[mod]= {0},cnt=0;
    for(long long i=0; i<n; i++)
    {
        cin>>s[i]>>t[i];
        dp[s[i]]++;
        dp[t[i]+1]--;
    }
    for(long long i=1; i<=10000000; i++)
    {
        dp[i]+=dp[i-1];
        if(dp[i]>num_max)
        {
            num_max=dp[i];
            cnt=0;
        }
        if(dp[i]==num_max)
            cnt++;
    }
    cout<<num_max<<endl;
    cout<<cnt<<endl;
}
