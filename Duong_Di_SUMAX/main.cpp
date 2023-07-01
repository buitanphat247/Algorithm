#include<bits/stdc++.h>
using namespace std;
const long long MAX = 1005; // Kích thước tối đa cho mảng dp
long long dp[MAX][MAX], n, m;

int main() {
   // freopen("1.INP", "r", stdin);
  //  freopen("1.OUT", "w", stdout);
    cin >> n >> m;
    for (long long i = 0; i < n; i++)
        for (long long j = 0; j < m; j++)
            cin >> dp[i][j];

    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < m; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = dp[i][j];
            } else if (i == 0) {
                dp[i][j] = dp[i][j] + dp[i][j - 1];
            } else if (j == 0) {
                dp[i][j] = dp[i][j] + dp[i - 1][j];
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + dp[i][j];
            }
        }
    }

    cout << dp[n - 1][m - 1] << endl;
    //https://lqdoj.edu.vn/problem/maxsumpath
}
/*
thuật toán quay lui
#include<bits/stdc++.h>
using namespace std;
const long long mod=1000;
long long dp[mod][mod],n,m,max_sum=-1e9;
void solve(long long x,long long y,long long sum)
{
    if(x==n-1&&y==m-1)
    {
        max_sum=max(sum+dp[x][y],max_sum);
        return;
    }
    if(y+1<=m)
        solve(x,y+1,sum+dp[x][y]);
    if(x+1<=n)
        solve(x+1,y,sum+dp[x][y]);
}
int main()
{
    cin>>n>>m;
    for(long long i=0;i<n;i++)
        for(long long j=0;j<m;j++)
            cin>>dp[i][j];
    solve(0,0,0);
    cout<<max_sum<<endl;
}
*/
