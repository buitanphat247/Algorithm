#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

ll IsPrime(ll n)
{
    if(n < 2)
        return 0;
    for(int i=2; i<= sqrt(n); i++)
        if(n% i==0)
            return 0;
    return 1;

}
int main()
{
    ll n, a, s=0, t=0;
    ld m;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("PRIARRTB.inp","r",stdin);
    freopen("PRIARRTB.out","w",stdout);
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        cin >> a;
        if(IsPrime(a)==1)
        {
            t++;
            s+=a;
        }
    }
    if(t>0)
    {
        m=(double)s/t;
        cout << fixed << setprecision(2) << m;
    }
    else
        cout << "$";
    return 0;
}
