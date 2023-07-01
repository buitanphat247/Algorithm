#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("OXDISTAN.inp","r",stdin);
    freopen("OXDISTAN.out","w",stdout);
    long long n,d,kq=-1e9,cnt=1,pos=0;
    cin >> n>>d;
    long long x[n];
    for(long long i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    for(long long i=0;i<n;i++)
    {
        cnt=1,pos=upper_bound(x,x+n,x[i]+d)-x-1;
        for(long long j=i+1;j<=pos;j++)
            if(x[j]-x[j-1]<=d)
                cnt++;
            else
                break;
        kq=max(kq,cnt);
    }
    cout<<kq<<endl;
}
