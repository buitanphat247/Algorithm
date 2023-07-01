#include <bits/stdc++.h>

using namespace std;

int n, a[100000], s, d;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("div3.inp", "r", stdin);
    freopen("div3.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int d[3] = {0};
    for (int i = 0; i < n; i++) {
        d[a[i] % 3]++;
    }

    int res = d[0] * (d[0] - 1) / 2;
    res += d[1] * d[2];

    cout << res << endl;

    return 0;
}
