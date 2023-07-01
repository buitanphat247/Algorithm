#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n, k, sum = 0;
    cin >> n >> k;
    vector<long long> v(n);
    for (long long i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    for (long long i = 0; i < n; i++)
    {
        long long tmp = k - v[i];
        long long pos = lower_bound(v.begin(), v.begin() + i, tmp) - v.begin();
        long long end = upper_bound(v.begin(), v.begin() + i, tmp) - v.begin() - 1;
        sum += (end - pos + 1);
    }
    cout << sum << endl;
}
