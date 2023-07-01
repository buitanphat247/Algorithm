#include <bits/stdc++.h>
using namespace std;
string s;
set<string> dp;
void solve(long long pos)
{
    if(pos==s.size())
    {
        cout<<s<<" ";
        return;
    }
    for(long long i=pos;i<s.size();i++)
    {
        swap(s[i],s[pos]);
        solve(pos+1);
        swap(s[i],s[pos]);
    }
}
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,num=0;
        cin>>n;
        for(long long i=1;i<=n;i++)
            num=num*10+i;
        s=to_string(num);
        solve(0);
        cout<<endl;
    }
}