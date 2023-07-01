#include <iostream>
using namespace std;

// Tính ước chung lớn nhất của m và n
long long gcd(long long m, long long n) {
    while (n != 0) {
        long long r = m % n;
        m = n;
        n = r;
    }
    return m;
}

// Tính bội chung nhỏ nhất của m và n
long long lcm(long long m, long long n) {
    return m * n / gcd(m, n);
}

int main() {
    long long m, n;
    cin >> m >> n;

    // Tìm và in ra UCLN và BCNN của m và n
    long long ucln = gcd(m, n);
    long long bcnn = lcm(m, n);
    cout << ucln << endl << bcnn << endl;

    return 0;
    //https://codeforces.com/gym/347815/problem/6A
}
