#include<bits/stdc++.h>
using namespace std;
long long n,k;
vector<long long>v;
void solve(long long i,long long last)
{
    if(i==k)
    {
        for(auto it:v)
            cout<<it<<" ";
        cout<<endl;
        return;
    }
    for(long long j=last+1;j<=n;j++)
    {
        v.push_back(j);
        solve(i+1,j);
        v.pop_back();
    }
}
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    cin>>n>>k;
    solve(0,0);
}

