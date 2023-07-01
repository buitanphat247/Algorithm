#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 10000000
ll n,v[MOD];
ll kq=-1e9;
void backtracking(ll i,ll lenght,ll last)
{
    if(i>n)
        return;
    if(v[i]>last)
    {
        kq=max(kq,lenght+1);
        backtracking(i+1,lenght+1,v[i]);
    }
    backtracking(i+1,lenght,last);
}
int main()
{
    freopen("LIS.inp","r",stdin);
    freopen("LIS.out","w",stdout);
    cin>>n;
    for(ll i=1;i<=n;i++)
        cin>>v[i];
    backtracking(1,0,0);
    cout<<kq<<endl;
}
