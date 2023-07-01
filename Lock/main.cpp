#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    bool check=1;
    map<long long,long long>mp;
    string s;
    cin>>s;
    for(long long i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
            check=0;
        mp[s[i]-'0']++;
    }
    if(mp.size()<=4)
        check=0;
    if(check==1)
        cout<<true<<endl;
    else
        cout<<false<<endl;
}
