#include<bits/stdc++.h>
using namespace std;

const long long MAXN = 1e6 + 10;
bool dp[MAXN];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long n, m;
    cin >> n >> m;

    long long v[n+10][m+10], num_max = -1;
    for (long long i = 0; i < n; i++) {
        for (long long j = 0; j < m; j++) {
            cin >> v[i][j];
            dp[v[i][j]] = true;
            num_max = max(num_max, v[i][j]);
        }
    }

    long long x, y, cnt = 0;
    cin >> x >> y;
    x--, y--;

    for (long long i = v[x][y]; i <= num_max; i++) {
        if (dp[i]) {
            cnt++;
        }
    }

    cout << cnt - 1 << endl;
    return 0;
}
