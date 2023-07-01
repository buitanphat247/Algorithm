#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,SNN=1e9,check=false;
    cin>>n;
    map<long long,long long >mp;
    for(long long i=0;i<n;i++)
    {
       long long x;
       cin>>x;
       mp[x]++;
    }
    for(auto it:mp)
        if(it.second<2)
            SNN=min(SNN,it.first),check=true;
    if(check==false)
    {
         cout<<"khong"<<endl;
        return 0;
    }
    cout<<SNN<<endl;
}
