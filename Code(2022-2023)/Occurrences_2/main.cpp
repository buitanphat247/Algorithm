#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    map<long long,long long>mp;
    for(long long i=0;i<n;i++)
    {
        long long tmp;
        cin>>tmp;
        mp[tmp]++;
    }
    for(auto it:mp)
        cout<<it.first<<" "<<it.second<<endl;
}
