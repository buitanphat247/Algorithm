#include <iostream>
#include <cmath>
using namespace std;
long long findDays(long long n) {
    long long days = ceil(sqrt(2 * n + 0.25) - 0.5);
    return days;
}
int main() {
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long N;
    cin >> N;
    long long days = findDays(N);
    cout << days << endl;
    return 0;
    //https://lqdoj.edu.vn/problem/23on3c21
}
