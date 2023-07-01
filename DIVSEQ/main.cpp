#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long d, n;
        cin >> d >> n;
        vector<long long> a(n + 1), cnt(d, 0);
        long long s = 0, res = 0;
        cnt[0] = 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            a[i] %= d;
            s = (s + a[i]) % d;
            res += cnt[s];
            cnt[s]++;
        }
        cout << res << endl;
    }
    return 0;
}
