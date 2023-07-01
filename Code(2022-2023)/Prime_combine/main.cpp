#include <bits/stdc++.h>
using namespace std;

void rut_gon(long long num1, long long num2)
{
    int div = __gcd(num1, num2);
    num1 /= div;
    num2 /= div;
    cout << num1 << " " << num2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    cin >> s;

    stringstream ss(s);
    double n;
    ss >> n;

    long long tp = pow(10, s.size() - 2);
    long long num1 = round(n * tp);
    rut_gon(num1, tp);
}
