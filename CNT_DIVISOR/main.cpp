#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e6;

long long dp[mod+1];

int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(long long i=1; i<=mod; i++)
    {
        for(long long j=i; j<=mod; j+=i)
        {
            dp[j]++;
        }
    }
    long long t;
    cin>>t;
    while(t--)
    {
        long long x;
        cin >> x;
        cout << dp[x] << endl;
    }
	//https://lqdoj.edu.vn/problem/cses1713
}
