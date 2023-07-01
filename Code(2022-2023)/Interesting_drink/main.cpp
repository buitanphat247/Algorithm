#include<bits/stdc++.h>
using namespace std;
const long long mod=1e5;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);

    long long n,min_n=9e9;
    cin>>n;
    long long x[mod]= {0};
    for(long long i=1; i<=n; i++)
    {
        cin>>x[i];
        min_n=min(x[i],min_n);
    }
    sort(x+1,x+1+n);
    long long t;
    cin>>t;
    while(t--)
    {
        long long cnt=0,k;
        cin>>k;
        if(k<min_n)
            cout<<"0"<<endl;
        else
        {
            long long pos=upper_bound(x+1,1+x+n,k)-x;

                cout<<pos-1<<endl;
        }
    }
}
