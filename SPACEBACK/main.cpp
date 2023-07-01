#include<bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    if(n<2)
        return false;
    for(long long i=2;i*i<n;i++)
        if(n%i==0)
        return false;
    return true;
}
int main()
{
    freopen("SPECPACK.inp","r",stdin);
    freopen("SPECPACK.out","w",stdout);
    long long n,k;
    cin>>n;
    vector<long long>v;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        if(check(x))
            v.push_back(x);
    }

    long long maxCnt = 1;
    vector<long long>dp(v.size()+1,1);
    for(long long i=0;i<v.size();i++)
    {
        for(long long j=0;j<i;j++)
            if(v[i]<v[j])
                dp[i]=max(dp[i],dp[j]+1);
        maxCnt=max(dp[i],maxCnt);
    }
    cout<<maxCnt<<endl;
}
