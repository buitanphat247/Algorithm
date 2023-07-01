#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int main()
{
    //https://lqdoj.edu.vn/problem/mask
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n;
    cin>>n;
    long long dp[n];
    for(long long i=0;i<n;i++)
        cin>>dp[i];
    long long q;
    cin>>q;
    sort(dp,dp+n);
    while(q--)
    {
        long long x;
        cin>>x;
        cout<<lower_bound(dp,dp+n,x)-dp-1+1<<endl;
    }
    return 0;
}
