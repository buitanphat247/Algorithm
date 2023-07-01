#include <bits/stdc++.h>
using namespace std;
struct car
{
    long long a, b;
};
bool cmp(car x, car y)
{
    if (x.b * y.a < y.b * x.a)
        return true;
    return false;
}
int main()
{
    freopen("SCHEDULE.inp", "r", stdin);
    freopen("SCHEDULE.out", "w", stdout);
    long long n;
    cin >> n;
    car x[n];
    for (long long i = 0; i < n; i++)
        cin >> x[i].a;
    for (long long i = 0; i < n; i++)
        cin >> x[i].b;
    sort(x, x + n, cmp);
    long long day = 0, sum = 0;
    for (long long i = 0; i < n; i++)
    {
        day += x[i].b;
        sum += x[i].a * day;
    }
    cout << sum << endl;
}
