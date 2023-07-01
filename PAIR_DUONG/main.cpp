#include <iostream>
#include <vector>
//https://lqdoj.edu.vn/problem/geq0
using namespace std;

long long combination(long long n, long long k)
{
    if (k > n - k)
        k = n - k;
    long long result = 1;

    for (long long i = 0; i < k; i++)
    {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

int main()
{
    freopen("1.inp", "r", stdin);
    freopen("1.out", "w", stdout);
    long long n;
    cin >> n;
    long long positive = 0, negative = 0;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        if (x >= 0)
            positive++;
        else
            negative++;
    }
    cout << combination(positive, 2) + combination(negative, 2) << endl;
    return 0;
}
