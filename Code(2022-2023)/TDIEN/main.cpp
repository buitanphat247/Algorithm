#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a,b;
    cin>>a>>b;
    ll kw=a-b,tien_dien=0;
    if (kw <= 60)
        tien_dien = kw * 1000;
    else if (kw <= 120)
        tien_dien = 60 * 1000 + (kw - 60) * 1200;
    else if (kw <= 300)
        tien_dien = 60 * 1000 + 60 * 1200 + (kw - 120) * 2000;
    else
        tien_dien = 60 * 1000 + 60 * 1200 + 180 * 2000 + (kw - 300) * 4000;
    cout<<kw<<endl<<tien_dien<<endl;
}
