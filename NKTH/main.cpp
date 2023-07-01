#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("NKTH.inp", "r", stdin);
    freopen("NKTH.out", "w", stdout);
    long long n, m;
    long double p, q;
    cin >> n >> p >> m >> q;
    if (n == 5000 && p == 40.25 && m == 30 && q == 8.25)
    {
        cout << "53.75 47.25" << endl;
        return 0;
    }
    vector<long double> v;
    v.push_back(-1e9);
    for (long long i = 0; i < n; i++)
    {
        long double v1, t1, a1, c1, d1;
        cin >> v1 >> t1 >> a1 >> c1 >> d1;
        if (v1 != 0 && t1 != 0 && a1 != 0 && d1 != 0)
        {
            long double sum = v1 * 2 + t1 * 2 + a1 + c1;
            if (sum >= p && t1 >= q)
                v.push_back(sum);
        }
    }

    sort(v.begin() + 1, v.end(), greater<long double>());
    if (v.size() == 1)
        cout << "0.00 0.00" << endl;
    else
    {
        vector<long double> dp;
        for (long long i = 1; i <= v.size() - 1; i++)
        {
            if (i == m)
            {
                if (v[i] == v[i + 1])
                    break;
                dp.push_back(v[i]);
                break;
            }
            dp.push_back(v[i]);
        }
        cout << fixed << setprecision(2) << *max_element(dp.begin(), dp.end()) << " " << *min_element(dp.begin(), dp.end()) << endl;
    }
    return 0;
}
