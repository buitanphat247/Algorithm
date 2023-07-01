#include<bits/stdc++.h>
using namespace std;
map<char,long long> mp;
void xuli(string s)
{
    for(long long i=0; i<s.size(); i++)
    {
        char c=(char)s[i];
        mp[c]++;
    }
}
void nhap()
{
    long long n;
    cin>>n;
    cin.ignore();
    for(long long i=0; i<n; i++)
    {
        string s;
        cin>>s;
        xuli(s);
        cout<<mp.size()<<endl;
        mp.clear();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    nhap();

}
