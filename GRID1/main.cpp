#include<bits/stdc++.h>
using namespace std;
int main()
{
    //https://lqdoj.edu.vn/problem/grid1
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long h,w;
    cin>>h>>w;
    char x[h+1][w+1];
    const long long MOD=1e9+7;
    vector<vector<long long>> dp(2000,vector<long long>(2000,0));
    for(long long i=0; i<h; i++)
    {
        for(long long j=0; j<w; j++)
        {
            cin>>x[i][j];
            if(x[0][0]=='*')
            {
                cout<<"0"<<endl;
                return 0;
            }
            dp[0][0]=1;
            if(i>0&&x[i][j]=='.')
                dp[i][j]=((dp[i][j]%MOD)+(dp[i-1][j]%MOD))%MOD;
            if(j>0&&x[i][j]=='.')
                dp[i][j]=((dp[i][j]%MOD)+(dp[i][j-1]%MOD))%MOD;
        }
    }
    cout<<dp[h-1][w-1]<<endl;
}
