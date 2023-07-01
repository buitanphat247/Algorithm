#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("TAXI.inp","r",stdin);
    freopen("TAXI.out","w",stdout);
    long long n,dp[5]= {0},cnt=0;
    cin>>n;
    for(long long i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        if(x==4)
            cnt++;
        else
            dp[x]++;
    }
    cnt+=dp[3];
    dp[1]=max(0LL,dp[1]-dp[3]),dp[3]=0;
    cnt+=dp[2]/2;
    dp[2]%=2;
    if (dp[2] > 0)
        cnt++,dp[1] = max(0LL, dp[1] - 2),dp[2]=0;
    cnt += (dp[1] + 3) / 4;
    cout<<cnt<<endl;
}
