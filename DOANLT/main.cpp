#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long v[n+10],p[n+10];
    for(long long i=1;i<=n;i++)
    {
        cin>>v[i];
        if(i==0)
            p[i]=v[i];
        else
            p[i]=p[i-1]+v[i];
    }
    long long k;
    cin>>k;
    while(k--)
    {
        long long l,r;
        cin>>l>>r;
        cout<<p[r]-p[l-1]<<endl;
    }
}
