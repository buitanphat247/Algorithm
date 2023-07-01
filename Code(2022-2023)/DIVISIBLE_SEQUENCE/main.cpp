#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long a[n],b[n],c[k],lmax=-1e9;
    fill(c,c+k,-1);
    for(long long i=0; i<n; i++)
    {
        cin>>a[i];
        if(i==0)
            b[i]=a[i];
        else
            b[i]=b[i-1]+a[i-1];
    }
    for(long long i=0; i<n; i++)
    {
        long long x=b[i]%k;
        if(c[x]==-1)
            c[x]=i;
        else
            lmax=max(i-c[x],lmax);
    }
    cout<<lmax<<endl;
}
