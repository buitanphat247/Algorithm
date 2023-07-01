#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long cnt = 0;
    long long cnt_a = 0, cnt_b = 0;
    long long dpA[n+1]= {0},dpB[n+1]= {0};
    for (long long i = 0; i < n; i++)
    {
        if (s[i] == 'a')
            cnt_a++;
        else
            cnt_b++;
        dpA[i + 1] = cnt_a;
        dpB[i + 1] = cnt_b;
        for (long long j = 0; j < i; j++)
        {
            if (dpA[i + 1] - dpA[j] == dpB[i + 1] - dpB[j])
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
