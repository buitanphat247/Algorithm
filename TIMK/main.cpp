#include <bits/stdc++.h>
using namespace std;

long long n;

long long dem(long long i)
{
    long long s=0;
    long long mu=i;
    while(n/mu>0)
    {
        s=s+n/mu;
        mu=mu*i;
    }
    return s;
}

void pt_tsnt(long long m)
{
    long long res=1e9;
    long long i=2;
    while(i<=int(sqrt(m)))
    {
        int t=0;
        while (m % i == 0)
        {
            m=m/i;
            t++;
        }
        if(t>0)
        {
            long long k=dem(i);
            res=min(res,k/t);
        }
        i++;
    }
    if(m>1)
    {
        long long k=dem(m);
        res=min(res,k);
    }
    cout<<res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long m;
    cin>>n>>m;
    pt_tsnt(m);
    return 0;
    //https://codeforces.com/gym/347815/problem/4C
}
