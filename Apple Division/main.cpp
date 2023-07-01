#include<bits/stdc++.h>
using namespace std;
long long n;
vector<long long>v;
long long kq=1e9;
void solve(long long sum1,long long sum2,long long i)
{
    if(i==n)
    {
        kq=min(kq,abs(sum2-sum1));
        return;
    }
    solve(sum1+v[i],sum2,i+1);
    solve(sum1,sum2+v[i],i+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    cin>>n;
    v.resize(n);
    for(long long i=0; i<n; i++)
        cin>>v[i];
    solve(0,0,0);
    cout<<kq<<endl;
}

//https://lqdoj.edu.vn/problem/cses1623
