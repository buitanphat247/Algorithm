#include<bits/stdc++.h>
using namespace std;
const long long mod=9999999999;
int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n,x;
    cin >> n;
    vector<bool> dp(mod, false);
    vector<long long> v;
    for (long long i = 0; i < n; i++)
    {
        cin >> x;
        if (dp[x] == false)
        {
            v.push_back(x);
            dp[x] = true;
        }
    }
    long long num_min=1e9;
    for(long long i=0;i<v.size();i++)
        if(dp[v[i]+1]==false)
            num_min=min(num_min,v[i]+1);
    cout<<num_min<<endl;
    return 0;
}
