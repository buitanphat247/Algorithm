#include<bits/stdc++.h>
using namespace std;
#define ll long long

const long long MAXN = 1e5 + 5;
long long n;
ll a[MAXN], f[MAXN];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    freopen("GIFTFAIR.INP", "r", stdin);
    freopen("GIFTFAIR.OUT", "w", stdout);
    cin >> n;
    for (long long i = 1; i <= n; i++) {
        cin >> a[i];
    }
    f[1] = a[1];
    for (long long i = 2; i <= n; i++) {
        f[i] = max(f[i-1], f[i-2] + a[i]);
    }
    cout << f[n];
    return 0;
}
