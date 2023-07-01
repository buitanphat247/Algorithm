#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

bool isPalindrome(long long n)
{
    long long reverse = 0;
    long long temp = n;

    while (temp != 0)
    {
        long long remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }

    return (n == reverse);
}

long long findSmallestSymmetricPrime(long long n)
{
    if (n <= 2)
        return 2;

    if (n % 2 == 0)
        n++;

    while (true)
    {
        if (isPalindrome(n) && isPrime(n))
            return n;
        n += 2;
    }
}

int main()
{
    freopen("1.INP", "r", stdin);
    freopen("1.OUT", "w", stdout);
    long long N;
    cin >> N;
    long long result = findSmallestSymmetricPrime(N);
    cout << result << endl;
    return 0;
    //https://vinhdinhcoder.net/Problem/Details/4607
}
