#include <iostream>
#include <algorithm>
using namespace std;
const long long MAX = 1e5;

void cnt_SUM(long long arr[], long long n, long long S) {
    long long freq[MAX] = {0} ,cnt = 0;
    for (long long i = 0; i < n; i++) {
        cnt += freq[S - arr[i]];
        freq[arr[i]]++;
    }
    cout<<cnt<<endl;
}

int main() {
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n, S;
    cin >> n >> S;
    long long arr[n];
    for (long long i = 0; i < n; i++)
        cin >> arr[i];
    cnt_SUM(arr, n, S);
    return 0;
}
