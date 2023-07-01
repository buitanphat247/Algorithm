#include<bits/stdc++.h>
using namespace std;


int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,num_max=-1e9;
    cin>>n;
    vector<long long>a(n+1),b(n+1);
    vector<long long> dp1(999999,0),dp2(999999,0);
    for(long long i=1; i<=n; i++)
    {
        cin>>a[i];
        dp1[i] = dp1[i - 1] + a[i];
    }
    for(long long i=1; i<=n; i++)
    {
        cin>>b[i];
        dp2[i] = dp2[i - 1] + b[i];
    }
    for(long long i=1; i<=n; i++)
    {
        long long tmp=max(dp1[i]+dp1[n]-dp1[i],dp1[i]+dp2[n]-dp2[i]);
        num_max=max(num_max,max(tmp,dp2[i]+dp2[n]-dp2[i]));
    }
    cout<<num_max<<endl;
    return 0;
}
