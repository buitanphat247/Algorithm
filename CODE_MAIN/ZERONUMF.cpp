#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long demts(long long m,long long n)
{
    long long d=0;
    while(n>=m)
    {
        d=d+(n/m);
        n=n/m;
    }
    return d;
}

int main()
{
    ll n;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    cout << demts(5,n) << endl;
    return 0;
}

