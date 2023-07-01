#include <bits/stdc++.h>
using namespace std;

int main()
{

    freopen("THUOCDOAN.inp", "r", stdin);
    freopen("THUOCDOAN.out", "w", stdout);
    long long n;
    cin >> n;
    map<long long, long long> mp;
    for (long long i = 0; i < n; i++)
    {
        long long x, y;
        cin >> x >> y;
        mp[x]++;
        mp[y + 1]--;
    }
    long long sum = 0, cnt = -1e9;
    for (auto it : mp)
    {
        sum += it.second;
        if (sum > cnt)
            cnt = sum;
    }
    cout << cnt << endl;
    return 0;
}
