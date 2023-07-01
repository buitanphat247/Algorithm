#include<bits/stdc++.h>
using namespace std;
bool cmp(long long a,long long b)
{
    return a>b;
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<long long>v;
        for(long long i=0; i<s.size(); i++)
            v.push_back(s[i]-'0');
        sort(v.begin(),v.end(),cmp);
        for(auto it:v)
            cout<<it;
        cout<<endl;
    }
}
