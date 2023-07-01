#include <iostream>
#include <vector>
using namespace std;

int main() {
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,m;
    string s1,s2;
    cin>>n>>m;
    cin>>s1>>s2;
    long long z=s1.size(),k=s2.size();
    vector<vector<long long>> dp(z+1, vector<long long>(k+1, 0));
    for(long long i=1;i<=z;i++)
    {
        for(long long j=1;j<=k;j++)
        {
            if(s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[z][k]<<endl;
    return 0;
    //https://oj.luyencode.net/problem/LCS
}
