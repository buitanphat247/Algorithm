#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e6 + 5;

int main()
{
    freopen("1.INP", "r", stdin);
    freopen("1.OUT", "w", stdout);
    int n;
    cin >> n;
    vector<int> dp(MAX_N, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dp[x] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (dp[i] == 0)
            cout << i << endl;
    }
    return 0;

    //https://lqdoj.edu.vn/problem/cses1083
}
