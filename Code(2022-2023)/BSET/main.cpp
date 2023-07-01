#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("BSET.inp","r",stdin);
    freopen("BSET.out","w",stdout);
    ll n,m,cnt=0;
    cin>>n>>m;
    ll x[n],z[m];
    set<long long>s,s1,s2;
    for(ll i=0; i<n; i++)
    {
        cin>>x[i];
        s.insert(x[i]);
        s1.insert(x[i]);
    }
    for(ll i=0; i<m; i++)
    {
        cin>>z[i];
        s.insert(z[i]);
        s2.insert(z[i]);
    }
    cout<<s.size()<<" ";
    for(auto it=s2.begin();it!=s2.end();it++)
    {
        if(binary_search(s1.begin(),s1.end(),*it)==true)
            cnt++;
    }
    cout<<cnt<<endl;
}
