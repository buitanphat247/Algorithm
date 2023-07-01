#include<bits/stdc++.h>
using namespace std;
long long C(long long n,long long k)
{
    if (k == 0 || k == n)
        return 1;
    else
        return C(n - 1, k - 1) + C(n - 1, k);
}
int main()
{
    long long n;
    cin>>n;
    map<long long,long long>mp;
    for(long long i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        mp[x]++;
    }
    long long res=0;
    for(auto it:mp)
    {
        if(it.second>=2)
            res+=C(it.second,2);
    }
    cout<<res<<endl;
}
