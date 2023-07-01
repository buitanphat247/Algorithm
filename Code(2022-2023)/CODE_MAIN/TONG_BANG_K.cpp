#include <bits/stdc++.h>
using namespace std;
long long n,k;
long long dp[150]={0},check[150]={0};
vector<long long>v;
void nhap()
{
    cin>>n>>k;
    for(long long i=0;i<n;i++)
        cin>>dp[i];
    sort(dp,dp+n);
}
void show()
{
    for(auto it:v)
        cout<<it<<" ";
    cout<<endl;
}
void solve(long long i,long long sum)
{
    if(sum==k)
    {
        show();
        return;
    }
    for(long long j=i;j<n;j++)
    {
        if(check[j]==0)
        {
            check[j]=1;
            v.push_back(dp[j]);
            solve(j+1,sum+dp[j]);
            check[j]=0;
            v.pop_back();
        }
    }
}
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    nhap();
    solve(0,0);
}
