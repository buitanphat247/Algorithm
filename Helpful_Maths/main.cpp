#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<long long>v;
    for(long long i=0; i<s.size(); i++)
        if(s[i]!='+')
            v.push_back(s[i]-'0');
    sort(v.begin(),v.end());
    long long n=v.size()-1,cnt=0;
    for(auto it:v)
    {
        cout<<it;
        if(cnt!=n)
        {
            cout<<"+";
            cnt++;
        }
    }
}
