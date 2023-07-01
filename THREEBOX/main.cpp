#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("THREEBOX.inp", "r", stdin);
    freopen("THREEBOX.out", "w", stdout);
    long long t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long v[3] = {a, b, c};
        sort(v, v + 3);
        if (a + b + c <= d)
            cout << "1" << endl;
        else if (v[0] + v[1] <= d || v[1] + v[2] <= d)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }

    return 0;
}
