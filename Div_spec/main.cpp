#include <bits/stdc++.h>
using namespace std;
long long n,m,i,S;
int tcs(long long n)
{
    int t=0;
    while(n)
    {
        t=t+n%10;
        n=n/10;
    }
    return t;
}
int main()
{
    cin>>n>>m;
    n=__gcd(n,m);
    S=0;
    for (i=1; i<=sqrt(n); i++)
        if(n%i==0)
        {
            if(tcs(i)>S)S=tcs(i);
            if(tcs(n/i)>S) S=tcs(n/i);
        }
    cout<<S;
    return 0;
}
