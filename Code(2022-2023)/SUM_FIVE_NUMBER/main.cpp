#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> B(n);
    for (long long i = 0; i < n; i++) {
        cin >> B[i];
    }

    sort(B.begin(), B.end());

    long long maxSum = B[n-1] + B[n-2] + B[n-3] + B[n-4] + B[n-5];
    long long minSum = B[0] + B[1] + B[2] + B[3] + B[4];

    cout << max(maxSum,minSum) << endl;
    //https://vinhdinhcoder.net/Problem/Details/4666
    return 0;
}
