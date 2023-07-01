#include<bits/stdc++.h>
using namespace std;
const long long N=8;
long long dp[N][N]= {0},cnt=0,n;
long long X[8] = { -2,-2,-1,-1, 1, 1, 2, 2};
long long Y[8] = { -1, 1,-2, 2,-2, 2,-1, 1};
void show()
{
    for(long long i=0; i<n; i++)
    {
        for(long long j=0; j<n; j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }
}
void solve(long long x,long long y)
{
    cnt++;
    dp[x][y]=cnt;
    if(cnt==n*n)
    {
        show();
        exit(0);
    }
    for(long long i=0; i<8; i++)
    {
        long long u=x+X[i];
        long long v=y+Y[i];
        if(u>=0&&v>=0&&u<n&&v<n&&dp[u][v]==0)
            solve(u,v);
    }
    dp[x][y]=0;
    cnt--;
}
int main()
{
    freopen("1.INP","r",stdin);
    freopen("1.OUT","w",stdout);
    cin>>n;
    long long x,y;
    cin>>x>>y;
    solve(x,y);
}
