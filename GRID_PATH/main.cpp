#include<bits/stdc++.h>
using namespace std;
const long long mod=1e9+7;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    cin>>n;
    vector<vector<long long>> dp(2000, vector<long long>(2000, 0));
    vector<vector<char>> x(2000, vector<char>(2000));
    for(long long i=0; i<n; i++)
    {
        for(long long j=0; j<n; j++)
        {
            cin>>x[i][j];
            if(x[0][0]=='*'||x[n-1][n-1]=='*')
            {
                cout<<"0"<<endl;
                return 0;
            }
            else
                dp[0][0]=1;
            if(i>0&&x[i][j]=='.')
                dp[i][j]=((dp[i][j]%mod)+(dp[i-1][j]%mod))%mod;
            if(j>0&&x[i][j]=='.')
                dp[i][j]=((dp[i][j]%mod)+(dp[i][j-1]%mod))%mod;
        }
    }
    cout<<dp[n-1][n-1]<<endl;
}
//https://lqdoj.edu.vn/problem/cses1638
