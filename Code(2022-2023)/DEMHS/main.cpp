#include<bits/stdc++.h>
using namespace std;
const long long mod=1e6+10;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long v[mod],b[mod],f[mod],g[mod];
    memset(b,0,sizeof(b));
    memset(g,0,sizeof(g));
    memset(f,0,sizeof(f));
    for(long long i=1; i<=n; i++)
    {
        cin>>v[i];
        b[i]=b[i-1]+(v[i]==1);
        f[i]=f[i-1]+(v[i]==2);
        g[i]=g[i-1]+(v[i]==3);
    }
    while(k--)
    {
        long long l,r;
        cin>>l>>r;
        long long size_b=b[r]-b[l-1],size_f=f[r]-f[l-1],size_g=g[r]-g[l-1];
        cout<<size_b<<" "<<size_f<<" "<<size_g<<endl;
    }
}
