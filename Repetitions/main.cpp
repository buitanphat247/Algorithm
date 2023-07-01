#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string s;
    cin>>s;
    if(s.size()==0)
    {
        cout<<"0"<<endl;
        return 0;
    }
    const long long mod=1e6+10;
    vector<long long>dp(mod,1);
    long long n=s.size(),max_len=1;
    for(long long i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
            dp[i]=max(dp[i],dp[i-1]+1);
        max_len=max(max_len,dp[i]);
    }
    cout<<max_len<<endl;
    return 0;
}
//https://lqdoj.edu.vn/problem/cses1069