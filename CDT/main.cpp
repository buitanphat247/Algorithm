#include <bits/stdc++.h>
using namespace std;
struct in4
{
    string name;
    long long math, it, id, s;
};
bool cmp(in4 a, in4 b)
{
    if (a.s == b.s)
    {
        if (a.it == b.it)
        {
            return a.id < b.id;
        }
        return a.it > b.it;
    }
    return a.s > b.s;
}
int main()
{
    freopen("CDT.inp", "r", stdin);
    freopen("CDT.out", "w", stdout);
    long long n;
    cin >> n;
    in4 x[n];
    for (long long i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin, x[i].name);
        cin >> x[i].math >> x[i].it;
        x[i].id = i + 1;
        x[i].s = x[i].math + x[i].it;
    }
    sort(x, x + n, cmp);
    long long cnt = 0;
    for (auto it : x)
    {
        if (cnt == 3)
            return 0;
        cnt++;
        cout << it.id << endl
             << it.name << endl;
    }
}
