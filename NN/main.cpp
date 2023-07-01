#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("NN.inp", "r", stdin);
    freopen("NN.out", "w", stdout);

    long long n;
    cin >> n;

    map<long long, long long> mp;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        mp[x] = 1;
    }
    for (long long i = 0; i <= n; i++)
    {
        if (mp.find(i) == mp.end())
        {
            cout << i << endl;
            return 0;
        }
    }

    return 0;
}
