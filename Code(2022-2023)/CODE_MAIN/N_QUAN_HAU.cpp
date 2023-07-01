#include <bits/stdc++.h>
using namespace std;
const long long mod=1e3;
long long dp[mod]= {0};
bool vs[mod][mod]={0};
long long n=4;
bool check(long long row,long long col)
{
    for(long long i=1; i < row; i++)
        if(dp[i]==col||abs(col-dp[i])==abs(i-row))
            return false;
    return true;
}
void show()
{
    for(long long i=1; i<=n; i++)
    {
        for(long long j=1;j<=n;j++)
            cout<<vs[i][j]<<" ";
        cout<<endl;
    }
    cout<<endl;
}
void solve(long long i)
{

    for(long long j=1; j<=n; j++)
    {
        if(check(i,j)==true)
        {
            dp[i]=j;
            vs[i][j]=1;
            if(i==n)
                show();
            solve(i+1);
            vs[i][j]=0;
        }
    }
}
int main()
{
    solve(1);
}



