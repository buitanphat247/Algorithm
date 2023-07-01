#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);

    long long n, m, x, y;
    cin >> n >> m >> x >> y;

    long long a[n];
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    long long b[m];
    for (long long i = 0; i < m; i++)
        cin >> b[i];

    sort(b, b + m);
    sort(a, a + n);

    long long i = 0, j = 0, cnt = 0;
    while (i < n && j < m)
    {
        if(b[j]<a[i]-x)
            j++;
        else{
            if(a[i]+y<b[j])
                i++;
            else
                i++,j++,cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}
