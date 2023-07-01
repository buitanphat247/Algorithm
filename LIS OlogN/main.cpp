#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    int n;
    cin >> n;
    vector<int> a(n), b(n, (long long)1e9);
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int k = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        b[k] = a[i];
        result = max(result, k);
    }
    cout << result + 1 << endl;
    //https://lqdoj.edu.vn/problem/cses1145
}
