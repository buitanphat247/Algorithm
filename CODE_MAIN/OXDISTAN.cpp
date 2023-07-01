#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("OXDISTAN.inp","r",stdin);
    freopen("OXDISTAN.out","w",stdout);
    long long n, d;
    cin >> n >> d;
    long long x[n];
    for(long long i=0; i<n; i++)
        cin>>x[i];
    sort(x,x+n);
    long long ans = 0, count = 1;
    for(long long i=0; i<n-1; i++)
    {
        if(x[i+1]-x[i] <= d)
            count++;
        else
        {
            ans = max(ans, count);
            count = 1;
        }
    }
    ans = max(ans, count);
    cout<<ans<<endl;
}

