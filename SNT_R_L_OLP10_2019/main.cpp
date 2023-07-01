#include <iostream>
#include <vector>
#include <cmath>

void segmentedSieve(long long a, long long b)
{
    long long limit = std::sqrt(b) + 1;
    std::vector<bool> isPrime(limit, true);
    std::vector<long long> primes;
    for (long long p = 2; p * p < limit; p++)
        if (isPrime[p])
            for (long long i = p * p; i < limit; i += p)
                isPrime[i] = false;
    for (long long p = 2; p < limit; p++)
        if (isPrime[p])
            primes.push_back(p);

    std::vector<bool> segIsPrime(b - a + 1, true);
    for (long long p : primes)
    {
        long long start = std::max(p * p, (a + p - 1) / p * p);
        for (long long i = start; i <= b; i += p)
            segIsPrime[i - a] = false;
    }

    long long cnt = 0;
    for (long long i = a; i <= b; i++)
        if (i >= 2 && segIsPrime[i - a])
            cnt++;
    std::cout << cnt << std::endl;
}

int main()
{
    long long t;
    std::cin >> t;
    while (t--)
    {
        long long a, b;
        std::cin >> a >> b;
        segmentedSieve(a, b);
    }

    return 0;
    //https://lqdoj.edu.vn/problem/primecount
}
