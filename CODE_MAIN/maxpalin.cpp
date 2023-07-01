#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("maxpalin.inp", "r", stdin);
    freopen("maxpalin.out", "w", stdout);
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long max_len = 0;

    for (long long i = 0; i < n; i++)
    {
        long long l1 = i, r1 = i + 1;
        while (l1 >= 0 && r1 < n && s[l1] == s[r1])
        {
            max_len = max(max_len, r1 - l1 + 1);
            l1--;
            r1++;
        }
        long long l2=i-1,r2=i+1;
        while (l2 >= 0 && r2 < n && s[l2] == s[r2])
        {
            max_len = max(max_len, r2 - l2 + 1);
            l2--;
            r2++;
        }
    }
    cout << max_len << endl;
}
