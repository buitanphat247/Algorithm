#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SZERO.inp", "r", stdin);
    freopen("SZERO.out", "w", stdout);
    long long n;
    cin >> n;
    long long x[n];
    long long p[n] = {0}, maxl = -1e9, l, r;
    map<long long, long long> mp;
    for (long long i = 1; i <= n; i++)
    {
        cin >> x[i];
        p[i] = p[i - 1] + x[i];
        if (p[i] == 0)
        {
            maxl = i + 1;
            l = 1;
            r = i;
        }
        else if (mp.find(p[i]) != mp.end())
        {
            if (i - mp[p[i]] > maxl)
            {
                maxl = i - mp[p[i]];
                l = mp[p[i]] + 1;
                r = i;
            }
        }
        else
        {
            mp[p[i]] = i;
        }
    }

    if (maxl > 0)
        cout << l << " " << r << endl;
    else
        cout << -1 << endl;

    return 0;
}
