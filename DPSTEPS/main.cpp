#include<bits/stdc++.h>
using namespace std;
const long long mod=1e7;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,x,tmp;
    cin>>n>>x;
    vector<long long> v(mod,true);
    for(long long i=0; i<x; i++)
    {
        cin>>tmp;
        v[tmp]=false;
    }
    long long dp[n+2]= {0};
    dp[0]=0;
    if(v[1]==true)
    {
        dp[1]=1;
        if(v[2]==true)
            dp[2]=2;
        else
            dp[2]=0;
    }
    else
    {
        dp[1]=0;
        if(v[2]==true)
            dp[2]=1;
        else
            dp[2]=0;
    }
    for(long long i=3;i<=n;i++)
        if(v[i]==true)
            dp[i]=(dp[i-1]+dp[i-2])%1000000007;
    cout<<dp[n]<<endl;
}
//https://oj.luyencode.net/problem/DPSTEPS
