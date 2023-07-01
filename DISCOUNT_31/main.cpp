#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    cin>>n;
    vector<long long>v(n,0);
    for(long long i=0; i<n; i++)
        cin>>v[i];

    sort(v.begin(),v.end());
    long long cnt=n/3,cost=0;
    for(long long i=0;i<v.size()-cnt;i++)
        cost+=v[i];
    cout<<cost<<endl;
    //https://oj.luyencode.net/problem/DISCOUNT
}
