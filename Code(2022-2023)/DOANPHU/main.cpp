#include<bits/stdc++.h>
using namespace std;
const long long mod=1e4;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,cnt=0;
    cin>>n;
    long long dp[mod]= {0},num_max=-1;
    for(long long i=0; i<n; i++)
    {
        long long x,y;
        cin>>x>>y;
        if(x>y)
            swap(x,y);
        for(long long j=x; j<y; j++)
            dp[j]++;
    }
    for(long long i=0; i<mod; i++)
    {
        num_max=max(num_max,dp[i]);
    }
    for(long long i=0; i<=mod; i++)
        if(dp[i]==num_max)
            cnt++;
    cout<<cnt<<endl;
}
