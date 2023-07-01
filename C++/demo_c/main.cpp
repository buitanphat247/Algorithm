#include <bits/stdc++.h>
using namespace std;

int main()
{
    // freopen("dragon.inp", "r", stdin);
    // freopen("dragon.out", "w", stdout);
    long long s, n;
    cin >> s >> n;

    long long a[100005][2];

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }

    sort(a, a + n);

    for (long long i = 0; i < n; i++)
    {
        if (s > a[i][0])
        {
            s += a[i][1];
        }
        else
        {
            cout << "NO" << endl;
            cout << n - i << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}