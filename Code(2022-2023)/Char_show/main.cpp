#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long cnt=0;
    map<char,long long>mp;
    for(long long i=0;i<s.size();i++)
    {
        char c=s[i];
        mp[c]++;
    }
    for(auto it:mp)
        if(it.second==1)
            cnt++;
    cout<<cnt<<endl;
}
