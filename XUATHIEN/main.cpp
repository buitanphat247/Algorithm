#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("XUATHIEN.inp", "r", stdin);
    freopen("XUATHIEN.out", "w", stdout);
    long long m, n;
    cin >> m >> n;
    set<long long> s2;
    vector<long long> s;
    for (long long i = 0; i < m; i++)
    {
        long long num;
        cin >> num;
        s.push_back(num);
    }

    long long cnt = 0;
    for (long long i = 0; i < n; i++)
    {
        long long num;
        cin >> num;
        s2.insert(num);
    }
    for (auto it : s)
        if (s2.find(it) != s2.end())
            cnt++;
    cout << cnt << endl;
    return 0;
}
