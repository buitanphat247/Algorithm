#include<bits/stdc++.h>
using namespace std;
const long long mod=1e6;
int main()
{
    vector<long long>v,v1(mod,1);
    v1[1]=v1[0]=0;
    for(long long i=2; i<=sqrt(mod); i++)
        if(v1[i]==1)
            for(long long j=i*i; j<=mod; j+=i)
                v1[j]=0;
    for(long long i=0; i<=mod; i++)
        if(v1[i])
            v.push_back(i);

    long long n;
    cin>>n;
    while(n--)
    {
        cin.ignore();
        string s;
        cin>>s;
        map<char,long long>mp;
        for(auto it:s)
        {
            char c=(char)it;
            mp[c]++;
        }
        long long cnt=0;
        for(auto it:mp)
            if(it.second==1)
                cnt++;
        if(binary_search(v.begin(),v.end(),cnt))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    //https://lqdoj.edu.vn/problem/primestring
}
