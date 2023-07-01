#include <bits/stdc++.h>
using namespace std;

struct project {
    long long s, e, p;
};

bool cmp(project &a, project &b) {
    return a.e < b.e;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("1.inp","r",stdin);
    freopen("1.out","w",stdout);
    long long n;
    cin >> n;

    vector<project> x(n);
    for (long long i = 0; i < n; i++)
        cin >> x[i].s >> x[i].e >> x[i].p;

    sort(x.begin(), x.end(), cmp);

    vector<long long> dp(n, 0);
    dp[0] = x[0].p;

    for (long long i = 1; i < n; i++) {
        dp[i] = x[i].p;

        // Binary search để tìm dự án có thời gian kết thúc trước dự án i
        // nhưng có giá trị tối đa
        long long left = 0, right = i - 1, idx = -1;
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (x[mid].e < x[i].s) {
                idx = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        if (idx != -1)
            dp[i] = max(dp[i], dp[idx] + x[i].p);

        // Cập nhật giá trị tối đa
        if (i > 0)
            dp[i] = max(dp[i], dp[i - 1]);
    }

    cout << dp[n - 1] << endl;
    return 0;
}
