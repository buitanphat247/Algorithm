#include<bits/stdc++.h>
using namespace std;
string s;
set<string>sit;
void input()
{
    cin>>s;
}
void solve(long long pos)
{
    if(pos==s.size())
        sit.insert(s);
    for(long long i=pos; i<s.size(); i++)
    {
        swap(s[i],s[pos]);
        solve(pos+1);
        swap(s[i],s[pos]);
    }
}
int main()
{
    input();
    solve(0);
    cout<<sit.size()<<endl;
    for(auto it:sit)
        cout<<it<<endl;
    //https://lqdoj.edu.vn/problem/cses1622
}
