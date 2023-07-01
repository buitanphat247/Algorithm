#include<bits/stdc++.h>
using namespace std;
const long long mod=1e7;
int main()
{
    long long n;
    cin>>n;
    map<long long,long long>mp;
    vector<long long> x(n);
    for(long long i=0; i<n; i++)
    {
        cin>>x[i];
        mp[x[i]]++;
    }
    for(const auto& it:mp)
    {
        for(int i=0; i<it.second; i++)
            cout<<it.first<<" ";
    }

}
