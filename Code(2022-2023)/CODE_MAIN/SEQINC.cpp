#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define str string
#define pb push_back
#define fast() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define Input(name)                 \
  freopen(name ".INP", "r", stdin); \
  freopen(name ".OUT", "w", stdout)
int main()
{
    fast();
    Input("SEQINC");
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for(ll i = 0; i < n; i++)
        cin>>a[i];
    while(m--)
    {
        ll x,y,sum=0;
        cin>>x>>y;
        if(x==0)
        {
            for(ll i = 0 ; i < n; i ++)
            {
                if(a[i]%2==0)
                    a[i]+=y,sum+=a[i];
                else sum+=a[i];
            }
            cout<<sum<<endl;
            continue;
        }
        else if (x==1)
        {
            for(ll i = 0 ; i < n; i ++)
            {
                if(a[i]%2==1)
                    a[i]+=y,sum+=a[i];
                else
                    sum+=a[i];
            }
            cout<<sum<<endl;
            continue;
        }
    }
}
