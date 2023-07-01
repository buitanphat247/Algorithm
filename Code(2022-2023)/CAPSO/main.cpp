#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n,k,sum=0;
    cin>>n>>k;
    map<long long,long long>mp;
    for(long long i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        auto it=mp.find(k-x);
        if(it!=mp.end())
            sum+=it->second;
        mp[x]++;
    }
    cout<<sum<<endl;
}
