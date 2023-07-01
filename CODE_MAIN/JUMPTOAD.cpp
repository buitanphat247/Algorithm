#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("JUMPTOAD.inp","r",stdin);
    freopen("JUMPTOAD.out","w",stdout);
    long long n,k;
    cin >> n>>k;
    long long x[n+10],dp[n+10]= {0};
    for(long long i=1; i<=n; i++)
        cin>>x[i];
    dp[0]=0;
    dp[1]=x[1];
    dp[2]=max(x[2],x[2]+dp[1]);
    for(long long i=3; i<=n; i++)
        dp[i]=max(x[i]+dp[i-1],x[i]+dp[i-k]);

   /*
    // in ra mảng kế hoạch xem thử đúng với ct truy hồi trong excel ko
    for(auto it:dp)
        cout<<it<<" ";
    cout<<endl;
*/
    // đây mới là kq
    cout<<max(dp[n],dp[n-1])<<endl;
}
