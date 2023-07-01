#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a,b,c,d,kq,n;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll m,i;
    cin >> n;
    for(i=1; i<=n; i++)
        m=12*2018;
    a=n%m;
    b=(n+1)%m;
    c=(n+2)%m;
    d=(n+3)%m;
    kq=(((((a*b)%m)*c)%m)*d)%m;
    cout << kq/12 << endl;
    return 0;
}


