#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("CDIV.inp","r",stdin);
    freopen("CDIV.out","w",stdout);
    long long n;
    cin>>n;
    long long x[n];
    for(long long i=0; i<n; i++)
        cin>>x[i];
    sort(x,x+n,greater<long long>());
    long long kq=1;
    for(long long i=0; i<n; i++)
        for(long long j=i+1; j<n; j++)
            kq=max(kq,__gcd(x[i],x[j]));
    cout<<kq<<endl;
}
