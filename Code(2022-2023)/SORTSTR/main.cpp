#include<bits/stdc++.h>
using namespace std;

int main() {

    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    string s;
    cin>>s;
    vector<char>v1,v2;
    for(long long i=0;i<s.size();i++)
    {
        if(s[i]>=97&&s[i]<=122)
            v1.push_back(s[i]);
        else
            v2.push_back(s[i]);
    }
    sort(v2.rbegin(),v2.rend());
    sort(v1.rbegin(),v1.rend());
    for(long long i=0;i<v2.size();i++)
        cout<<v2[i];
    for(long long i=0;i<v1.size();i++)
        cout<<v1[i];
    return 0;
    //https://vinhdinhcoder.net/Problem/Details/4668
}
