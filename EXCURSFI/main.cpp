#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    cin >> n;
    long long a[n+10]= {0},dp[n+10];
    fill(dp,dp+n+10,0);
    for(int i=1; i<=n; i++)
        cin >> a[i];
    for(long long i=1; i<=n; i++)
    {
        if(a[i]%2==0)
        {
            dp[i]=1;
            for(long long j=1; j<i; j++)
                if(a[j]<a[i]&&a[j]%2==0)
                    dp[i]=max(dp[i],dp[j]+1);
        }
    }
    cout<<*max_element(dp,dp+n+10)<<endl;
}
