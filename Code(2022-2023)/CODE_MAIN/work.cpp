#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("work.inp", "r", stdin);
    freopen("work.out", "w", stdout);
    long long n;
    cin>>n;
    vector<long long> t(n+2),p(n+3-1),f(n+10);
    for(long long i=1;i<=n;i++)
        cin>>t[i];
    for(long long i=1;i<=n-1;i++)
        cin>>p[i];
    f[0]=0;
    f[1]=t[1];
    f[2]=min(t[1]+t[2],p[1]);
    for(long long i=3;i<=n;i++)
        f[i]=min(f[i-2]+p[i-1],f[i-1]+t[i]);
    cout<<f[n]<<endl;
}
