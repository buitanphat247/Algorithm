c2
#include<bits/stdc++.h>
using namespace std;
const long long mod=1e5;
long long n,m;
long long c[mod],p[mod];
long long max_sum=-1e9;
void solve(long long i,long long tien_von,long long loi_nhuan)
{
    if(tien_von>m)
        return;
    if(i==n)
    {
        max_sum=max(max_sum,loi_nhuan);
        return;
    }
    solve(i+1,tien_von+c[i],loi_nhuan+p[i]);
    solve(i+1,tien_von,loi_nhuan);
}
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    cin>>n>>m;
    for(long long i=0; i<n; i++)
        cin>>c[i];
    for(long long i=0; i<n; i++)
        cin>>p[i];
    solve(0,0,0);
    cout<<max_sum<<endl;
}
c1
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,m;
    cin>>n>>m;
    vector<vector<long long>> dp(n+1, vector<long long>(m+1, 0));
    vector<long long>c(n+1,0),p(n+1,0);
    for(long long i=1; i<=n; i++)
        cin>>c[i];
    for(long long i=1; i<=n; i++)
        cin>>p[i];
    for(long long i=1; i<=n; i++)
    {
        for(long long j=1; j<=m; j++)
        {
            dp[i][j]=dp[i-1][j];
            if(j>=c[i])
                dp[i][j]=max(dp[i][j],dp[i-1][j-c[i]]+p[i]);
        }
    }
    cout<<dp[n][m]<<endl;
}
*/
//https://oj.luyencode.net/problem/PROJECT
