#include <bits/stdc++.h>

using namespace std;
const long long mod=1e5+999;
int main()
{
    freopen("CROSS.inp","r",stdin);
    freopen("CROSS.out","w",stdout);
    long long n;
    cin >> n;
    long long dp[mod];
    fill(dp,dp+mod,-1);
    long long cnt = 0,ID,VT;
    for (long long i = 0; i < n; i++)
    {
        cin>>ID>>VT;
        if(dp[ID]==-1)
            dp[ID]=VT;
        else if(dp[ID]!=-1)
            if(dp[ID]!=VT)
                cnt++,dp[ID]=VT;
    }
    cout<<cnt<<endl;
    return 0;
}

