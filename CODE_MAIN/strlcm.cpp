#include <bits/stdc++.h>

using namespace std;
int q;
int main()
{
    freopen("strlcm.inp","r",stdin);
    freopen("strlcm.out","w",stdout);
    cin >> q;
    while (q--)
    {
        string s, t;
        cin >> s >> t;
        int a = s.size(), b = t.size();
        int lcm = (a*b)/__gcd(a,b);
        string sa = "", sb = "";
        for (int i=1; i<=lcm/a; i++) sa += s;
        for (int i=1; i<=lcm/b; i++) sb += t;
        if (sa == sb) cout << sa << '\n';
        else cout << -1 << '\n';
    }
    return 0;
}
