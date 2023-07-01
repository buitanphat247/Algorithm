#include <bits/stdc++.h>
using namespace std;
bool cmp(string x, string y)
{
    if (x != y)
        return x + y < y + x;
}
int main()
{
    freopen("GHEPSO.inp", "r", stdin);
    freopen("GHEPSO.out", "w", stdout);
    vector<string> s;
    string x;
    while (cin >> x)
        s.push_back(x);
    sort(s.rbegin(), s.rend(), cmp);
    x = "";
    for (auto it : s)
        x += it;
    cout << x << endl;
}
