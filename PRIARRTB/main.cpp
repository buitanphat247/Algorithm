#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n, a, sum=0, Cnt=0;
long double ans;

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
            Cnt++;
            sum+=a;
        }
    }
    if(Cnt > 0)
    {
        ans= (double)sum/Cnt;
        cout << fixed << setprecision(2) << ans;
    }
    else
        cout << "$";
    return 0;
}
