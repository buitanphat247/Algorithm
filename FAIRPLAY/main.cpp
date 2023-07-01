#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("FAIRPLAY.inp", "r", stdin);
    freopen("FAIRPLAY.out", "w", stdout);

    long long n, cnt = 0;
    cin >> n;
    vector<long long> team1(n), team2(n);
    for (long long i = 0; i < n; i++)
        cin >> team1[i];
    for (long long i = 0; i < n; i++)
        cin >> team2[i];

    sort(team1.begin(), team1.end());
    sort(team2.begin(), team2.end());
    for (long long i = 0; i < n; i++)
    {
        auto pos = upper_bound(team2.begin(), team2.end(), team1[i]);
        if (pos != team2.end())
        {
            cnt++;
            team2.erase(pos);
        }
    }
    cout << cnt << endl;

    return 0;
}
