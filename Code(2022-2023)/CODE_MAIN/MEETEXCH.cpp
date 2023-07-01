#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("MEETEXCH.INP", "r", stdin);
    freopen("MEETEXCH.OUT", "w", stdout);
    long long n;
    cin >> n;
    long long cnt = 0,max_cnt = 0;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x == 1)
            cnt++;
        else
            cnt--;
        max_cnt = max(max_cnt, cnt);
    }

    cout << max_cnt << endl;

    return 0;
}
