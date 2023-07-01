#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long x[n];
    for(long long i=0; i<n; i++)
        cin>>x[i];
    sort(x,x+n);
    long long cnt=0;
    for(long long i=0; i<n; i++)
    {
        long long tmp=m-x[i];
        if(tmp>x[i])
        {
            long long pos=upper_bound(x,x+n,tmp)-x-1;
            cnt+=pos-i;
        }
    }
    for(auto it:x)
        cout<<it<<" ";
    cout<<cnt<<endl;
}
