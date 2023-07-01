#include <bits/stdc++.h> #include <string>
using namespace std;
int n, c1, a[10001], b[101], c[101], res = 0, d[1000001];
string s;
void nhap()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> c1;
    for (int i = 1; i <= c1; i++)
        cin >> b[i];
}
void xuli()
{
    sort(b + 1, b + 1 + c1);
    for (int i = 1; i <= n - c1 + 1; i++)
    {
        for (int j = 1; j <= c1; j++)
            c[j] = a[j + i - 1];
        sort(c + 1, c + 1 + c1);
        int k = 0;
        int x = b[1] - c[1];
        for (int j = 2; j <= c1; j++)
            if (b[j] - c[j] != x)
                k = 1;
        if (k == 0)
        {
            res++;
            d[res] = i;
        }
    }
}
void xuat()
{
    cout << res << endl;
    for (int i = 1; i <= res; i++)
        cout << d[i] << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("music.inp", "r", stdin);
    freopen("music.out", "w", stdout);
    nhap();
    xuli();
    xuat();
}
