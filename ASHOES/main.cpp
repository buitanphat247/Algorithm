#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,x,cnt=0;
    cin>>n;
    map<long long,long long>mp;
    for(long long i=0; i<n; i++)
    {
        cin>>x;
        mp[x]++;
    }
    for(long long i=0; i<n; i++)
    {
        cin>>x;
        mp[x]++;
    }
    for(auto it:mp)
        cnt+=it.second%2;
    cout<<cnt<<endl;
    //https://oj.luyencode.net/problem/ASHOES
}
