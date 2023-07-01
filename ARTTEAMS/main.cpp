#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,x,cnt=0;
    cin>>n;
    long long dp[n+1];
    for(long long i=0;i<n;i++)
        cin>>dp[i];
    sort(dp,dp+n);
    long long check=1e9;
    for(long long i=0;i<n-5+1;i++)
        check=min(check,dp[i+5-1]-dp[i]);
    cout<<check<<endl;
}
//https://oj.luyencode.net/problem/ARTTEAMS
