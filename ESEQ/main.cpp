#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long v[n+10],p[n+10];
    p[0]=0;
    for(long long i=1;i<=n;i++)
    {
        cin>>v[i];
        if(i==0)
            p[i]=v[i];
        else
            p[i]=p[i-1]+v[i];
    }
    long long cnt=0;
    for(long long i=2;i<=n;i++)
    {
        for(long long j=1;j<i;j++)
        {
            if(p[j]==p[n]-p[i-1])
                cnt++;
        }
    }
    cout<<cnt<<endl;
}
