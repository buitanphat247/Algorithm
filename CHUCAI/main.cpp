#include<bits/stdc++.h>
using namespace std;
map<char, long long> mp;
void xuli(string s)
{
    for (long long i = 0; i < s.size(); i++)
    {
        char c = (char)s[i];
        int check=(int)c;
        if (check>=65&&check<=90)
            mp[c]++;
    }
}
void nhap()
{
    string s;
    cin >> s;
    xuli(s);
    for (auto it : mp)
        cout << it.first << " " << it.second << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    nhap();

}
