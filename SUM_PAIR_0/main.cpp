#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int main()
{
    //https://lqdoj.edu.vn/problem/cntpair0sum
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n,s=0;
    cin>>n;
    map<long long,long long>mp;
    long long x[n+1];
    for(long long i=0;i<n;i++)
        cin>>x[i];
    long long cnt=0;
    for(long long i=0;i<n;i++)
    {
        long long tmp=s-x[i];
        cnt+=mp[tmp];
        mp[x[i]]++;
    }
    cout<<cnt<<endl;
    return 0;
}
