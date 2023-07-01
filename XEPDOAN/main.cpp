#include <bits/stdc++.h>
using namespace std;

struct line
{
    long long a, b;
};

bool cmp(line m, line n)
{
    if (m.a < n.a)
        return true;
    return false;
}

int main()
{

    freopen("XEPDOAN.inp","r",stdin);
    freopen("XEPDOAN.out","w",stdout);
    long long n, cnt = 0;
    cin >> n;
    line x[n];
    for (long long i = 0; i < n; i++)
    {
        long long k;
        cin >> x[i].a >> k;
        x[i].b = x[i].a + k;
    }
    sort(x, x + n, cmp);
    long long length = 0;
    long long start = x[0].a;
    long long end = x[0].b;
    for (long long i = 1; i < n; i++)
    {
        if (end >= x[i].a)
        {
            if (x[i].b > end)
                end = x[i].b;
        }
        else
        {
            length += end - start;
            start = x[i].a;
            end = x[i].b;
        }
    }
    length += end - start;
    cout << length << endl;
    return 0;
}
