#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    int n, m, k;
    cin >> n >> m >> k;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        if (i < 2)
            v[i] = 1;
        else
            v[i] = ((v[i - 1] % m) + (v[i - 2] % m)) % m;
    }
    sort(v, v + n);
    cout << v[k - 1] << endl;
}
