#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    cin>>n;
    if(n==0)
    {
        cout<<0<<endl;
        return 0;
    }
    long long x[n];
    for(long long i=0; i<n; i++)
        cin>>x[i];
    long long max_len=-1e9,len=1;
    for(long long i=1; i<n; i++)
    {
        if(abs(x[i-1])%2==0&&abs(x[i])%2!=0||abs(x[i-1])%2!=0&&abs(x[i])%2==0)
        {
            len++;
            max_len=max(len,max_len);
        }
        else
            len=1;
    }
    cout<<max_len<<endl;
}
