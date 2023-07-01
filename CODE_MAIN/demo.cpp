#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int t[n];
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }

    sort(t, t + n);

    int total_time = 0;
    for (int i = 0; i < n; i++) {
        total_time += (n - i) * t[i];
    }

    cout << total_time << endl;

    return 0;
}

