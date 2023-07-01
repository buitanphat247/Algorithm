#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e7;
int main()
{
    ll n,tmp,cnt=0;
    cin >> n;
    tmp=n;
    ll x[n];
    fill(x,x+n,1);
    x[1]=x[0]=0;
    for (ll i = 2; i <= sqrt(n); i++)
        if (x[i] == true)
            for (ll j = i * i; j <= n; j += i)
                x[j] = false;

    for(ll i=1; i<=n; i++)
        if(x[i]==false&&tmp%i==0)
                cnt++;
    cout<<cnt<<endl;
}
