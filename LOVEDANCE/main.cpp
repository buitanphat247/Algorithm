#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);

    long long n, m, cnt = 0;
    cin >> n >> m;

    long long x[n], z[m];
    for (long long i = 0; i < n; i++)
        cin >> x[i];

    for (long long i = 0; i < m; i++)
        cin >> z[i];
    if(m<n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    sort(x, x + n);
    sort(z, z + m);

    for (long long i = 0; i < m; i++)
    {
        long long pos = upper_bound(x, x + n, z[i]) - x;
        if (pos < n)
            x[pos] = 0,z[i] = 0;
        else if(pos>n)
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    bool NOT_FALSE=true;
    for(long long i=0;i<n;i++)
        if(x[i]!=0)
            NOT_FALSE=false;
    if(NOT_FALSE==true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
    //https://vinhdinhcoder.net/Problem/Details/4671
}
