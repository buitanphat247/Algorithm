#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,res=0;
    cin>>n;
    long long x[n];
    map<long long,long long>mp;
    for(long long i=0;i<n;i++)
    {
        cin>>x[i];
        mp[x[i]]++;
    }
    for(auto it:mp)
    {
        if(it.second>=2)
            res+=it.second/2;
    }
    cout<<res<<endl;
}
