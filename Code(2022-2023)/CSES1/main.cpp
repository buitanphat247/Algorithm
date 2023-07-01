#include<bits/stdc++.h>
using namespace std;
const long long MOD=1e3+100;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, k;
    cin >> n;
    string x[n];
    for (long long i = 0; i < n; i++)
        cin >> x[i];
    long long l = 0, r = 0, cnt = 0;
    map<string,int> dp;
    long long max_cnt=0;
    while (r != n)
    {
        if(dp[x[r]]==0)
        {
            dp[x[r]]=1;
            max_cnt=max(r-l+1,max_cnt);
            r++;
        }else{
            dp[x[l]]=0;
            l++;
        }

    }
    cout << max_cnt << endl;
}
